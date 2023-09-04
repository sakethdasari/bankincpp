#include<iostream>
#include<string>
#include<cstring>
#include"date.h"
class Account
{
protected:
    long long int accno;
    std::string accname;
    long int balance;
    Date date;
    char* PAN;
    char* aadhar;
public:
    //virtual void newaccount() = 0;
    virtual void panaadhar() = 0;
    virtual void deposite(long int) = 0;
    virtual void withdraw(long int) = 0;
    virtual void balanceeneuiry() = 0;
    virtual void accountdetails() = 0;
};

class SavingAccount: public Account
{
    int minbalance = 500;
public:
    SavingAccount(long long accno, std::string name, long int balance);
    void deposite(long int);
    void withdraw(long int);
    void balanceeneuiry();
    void accountdetails();
    void panaadhar();
};
class CurrentAccount: public Account
{
    int overdraft = 1000;
public:
    CurrentAccount(long long accno, std::string name, long int balance);
    void deposite(long int);
    void withdraw(long int);
    void balanceeneuiry();
    void accountdetails();
    void panaadhar();
};