/******************************************************************
 CIS 22B
 Lab5: Checking Class: inherit methods from Bank Account to calculate the
 deposits withdrawals amounts, balance of checking account, and
 total fee if withdraw more than 5 times. Then print out the final balance
 of the account subtracts the total fee
 Author: Tuan Nguyen
 Date: 06/07/2018
 *******************************************************************/

#include "Checking.hpp"
#include <iostream>

using namespace std;

//constructor
Checking::Checking(double amt, double wdFee):BankAccount(amt)
{
    fee = wdFee;
}

//Destructor
Checking::~Checking() {
    
}

/***************************************************************
 Withdraw function
 ****************************************************************/
void Checking::withdraw(double amt)
{
    //add fee to the amount of withdraw if withdrawals more than 5 times
    if (withdrawals > 5) {
        amt = amt + fee;
    }
    //check the balance has suffient amount to withdraw
    if (amt < amount && amount > 0.0)
    {
        //inherit withdraw function from bank account class
        BankAccount::withdraw(amt);
    }
    else
    {
        cout << "Insuffient funds to withdraw from checking account" << endl;
    }
}

/***************************************************************
 Deposit function
 ****************************************************************/
void Checking::deposit(double amt)
{
    //inherit deposit function from Bank Account class
    BankAccount::deposit(amt);
}

/***************************************************************
 Monthly Proc function
 ****************************************************************/
void Checking::monthlyProc()
{
    //check if withdrawals more than 5 times and calculate the
    //total fee, then substract the fee from the checking balance
    if (withdrawals > 5)
    {
        totalFee = ((withdrawals - 5) * fee);
        amount -= totalFee;
    }
}

/***************************************************************
 Print statement function
 ****************************************************************/
void Checking:: printStatement()
{
    //call monthly proc function to get the updated balance and total fee
    monthlyProc();
    //print out the statement
    cout << "Checking account balance is: " << amount << endl;
    cout << "Total fee: " << totalFee << endl;
    cout << "You made " << withdrawals << " total withdrawals from checking account" << endl;
    cout << "You made " << deposits << " total deposits to checking account" << endl;
    //reset withdrawals and deposits count
    withdrawals = deposits = 0;
}

