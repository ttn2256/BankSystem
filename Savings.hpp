/******************************************************************
 CIS 22B
 Lab5: Saving Class: inherit methods from Bank Account to calculate the
 deposits withdrawals amounts, balance of saving account, and
 interest rate earning. Then print out the final balance of the account
 with interest earnings
 Author: Tuan Nguyen
 Date: 06/07/2018
 *******************************************************************/

#ifndef Savings_hpp
#define Savings_hpp

#include <stdio.h>
#include <iostream>
#include "BankAccount.hpp"

class Savings : public BankAccount
{

private:
    double interestRate, interestearn;
    void monthlyProc();
    
public:
    Savings(double amt, double intRate);
    ~Savings();
    void withdraw(double amt);
    void deposit(double amt);
    void printStatement();
};

#endif /* Savings_hpp */
