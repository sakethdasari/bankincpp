#include "bank.h"

// saving Account
SavingAccount::SavingAccount(long long accno, std::string name, long int balance)
{
    this->accno = accno;
    this->accname = name;
    this->balance = balance;
}
void SavingAccount::deposite(long int money)
{
    balance += money;
    std::cout<<"Your savings Account "<<accno<<" is credited with Rs "<<money<<" ,Your total avaliabe balance is "<<balance<<std::endl;
}
void SavingAccount::withdraw(long int money)
{
    if(balance-money < minbalance)
    {
        throw "Insufficient funds\nPlease Enter lower amount\n";
    }
    else
    {
    balance -= money;
    std::cout<<"Your savings Account "<<accno<<" is debited with Rs "<<money<<" ,Your total avaliabe balance is "<<balance<<std::endl;
    }
}
void SavingAccount::balanceeneuiry()
{
    std::cout<<"Your savings Account "<<accno<<", Your total avaliabe balance is "<<balance<<std::endl;
}
void SavingAccount::accountdetails()
{
    std::cout<<"Account No : "<<accno<<std::endl;
    std::cout<<"Name : "<<accname<<std::endl;
    std::cout<<"Account Type : Saving Account"<<std::endl;
    std::cout<<"Balance : "<<balance<<std::endl;
    std::cout<<"PAN NO : "<<PAN<<std::endl;
    std::cout<<"Aadhar No : "<<aadhar<<std::endl;

}
void SavingAccount::panaadhar()
{
    std::cout<<"Enter Aadhar and PAN Card Details"<<std::endl;
    std::cin>>aadhar>>PAN;
    if(std::strlen(aadhar)!=12)
    {
        throw "Invalid Aadhar Number \n";
    }
    if(std::strlen(PAN)!=10)
    {
        throw "Invalid PAN Card Number \n";
    }
}

// Current Account
CurrentAccount::CurrentAccount(long long accno, std::string name, long int balance)
{
    this->accno = accno;
    this->accname = name;
    this->balance = balance;
}
void CurrentAccount::deposite(long int money)
{
     balance += money;
    std::cout<<"Your Current Account "<<accno<<" is credited with Rs "<<money<<" ,Your total avaliabe balance is "<<balance<<std::endl;
}
void CurrentAccount::withdraw(long int money)
{
    if (balance + overdraft - money >= 0) 
    {
        balance -= money;
        std::cout<<"Your Current Account "<<accno<<" is debited with Rs "<<money<<" ,Your total avaliabe balance is "<<balance<<std::endl;
    } 
    else 
    {
        throw "Insufficient funds\n";
    }
}
void CurrentAccount::balanceeneuiry()
{
    std::cout<<"Your Current Account "<<accno<<", Your total avaliabe balance is "<<balance<<std::endl;
}
void CurrentAccount::accountdetails()
{
    std::cout<<"Account No : "<<accno<<std::endl;
    std::cout<<"Name : "<<accname<<std::endl;
    std::cout<<"Account Type : Current Account"<<std::endl;
    std::cout<<"Balance : "<<balance<<std::endl;
    std::cout<<"PAN NO : "<<PAN<<std::endl;
    std::cout<<"Aadhar No : "<<aadhar<<std::endl;
}
void CurrentAccount::panaadhar()
{
    std::cout<<"Enter Aadhar and PAN Card Details"<<std::endl;
    std::cin>>aadhar>>PAN;
    if(std::strlen(aadhar)!=12)
    {
        throw "Invalid Aadhar Number \n";
    }
    if(std::strlen(PAN)!=10)
    {
        throw "Invalid PAN Card Number \n";
    }
}