#ifndef BankAccount_hpp
#define BankAccount_hpp

#include <stdio.h>
using namespace std;

class BankAccount
{
private:
    virtual void monthlyProc() = 0;
    
protected:
    double amount;
    int withdrawals, deposits;
    
public:
    BankAccount(double amt)
    {
        amount = amt;
        withdrawals = deposits = 0;
    }
    
    virtual void withdraw(double amt)
    {
        amount -= amt;
        withdrawals++;
    }
    virtual void deposit(double amt)
    {
        amount += amt;
        deposits++;
    }
    virtual void printStatement() = 0;
    
};

#endif /* BankAccount_hpp */
