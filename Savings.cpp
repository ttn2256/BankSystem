/******************************************************************
 CIS 22B
 Lab5: Saving Class: inherit methods from Bank Account to calculate the
 deposits withdrawals amounts, balance of saving account, and
 interest rate earning. Then print out the final balance of the account
 with interest earnings
 Author: Tuan Nguyen
 Date: 06/07/2018
 *******************************************************************/

#include "Savings.hpp"
#include <iostream>

using namespace std;

//Constructor
Savings::Savings(double amt, double intRate):BankAccount(amt)
{
    interestRate = intRate;
}

//Destructor
Savings::~Savings() {
    
}

/***************************************************************
 Deposit function
 ****************************************************************/
void Savings::deposit(double amt)
{
    //inherit deposit function from bank account class
    BankAccount::deposit(amt);
}

/***************************************************************
 Withdraw function
 ****************************************************************/
void Savings::withdraw(double amt)
{
    //check if the balance has suffient amount to withdraw
    if (amt < amount && amount > 0.0)
    {
        //inherit withdraw function from bank account class
        BankAccount::withdraw(amt);
    }
    else
    {
        cout << "Insuffient funds to withdraw from saving account" << endl;
    }
}

/***************************************************************
 Monthly Proc function
 ****************************************************************/
void Savings::monthlyProc()
{
    //caculate the interest earn and add that interest to the balance
    interestearn = amount * interestRate;
    amount += interestearn;
}

/***************************************************************
 Print statement function
 ****************************************************************/
void Savings::printStatement()
{
    //call monthly proc function to get the updated balance and interest earn
    monthlyProc();
    //print out the statement
    cout << "Saving account balance is: " << amount << endl;
    cout << "Interest earns: " << interestearn << endl;
    cout << "You made " << withdrawals << " total withdrawals from saving account" << endl;
    cout << "You made " << deposits << " total deposits to saving account" << endl;
    //reset withdrawals and deposits counts
    withdrawals = deposits = 0;
}

