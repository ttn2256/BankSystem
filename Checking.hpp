/******************************************************************
 CIS 22B
 Lab5: Checking Class: inherit methods from Bank Account to calculate the
 deposits withdrawals amounts, balance of checking account, and
 total fee if withdraw more than 5 times. Then print out the final balance
 of the account subtracts the total fee
 Author: Tuan Nguyen
 Date: 06/07/2018
 *******************************************************************/

#ifndef Checking_hpp
#define Checking_hpp

#include <stdio.h>
#include <iostream>
#include "BankAccount.hpp"

class Checking : public BankAccount
{
private:
    double fee, totalFee;
    void monthlyProc();
    
public:
    Checking(double amt, double wdFee);
    ~Checking();
    void withdraw(double amt);
    void deposit(double amt);
    void printStatement();
};

#endif /* Checking_hpp */
