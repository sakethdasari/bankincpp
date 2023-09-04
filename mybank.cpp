#include"bank.h"
int main()
{
    SavingAccount s(73134401317,"Saketh Reddy", 600);
    int option;
    std::cout<<"Press 1 to withdraw \nPress 2 to Deposit\n";
    std::cout<<"Press 3 for Balance Eneuiry \nPress 4 for Account Details\n";
    std::cin>>option;
    if(option==1)
    {
        while(1)
        {
            try
            {
                int a;
                std::cout<<"Enter withdraw amount : \n";
                std::cin>>a;
                s.withdraw(a);
                break;
            }
            catch(const char* e)
            {
                if(e)
                std::cerr << e<< '\n';
            }
        }
    }
    else if(option==2)
    {
        int a;
        std::cout<<"Enter Deposit amount : \n";
        std::cin>>a;
        s.deposite(a);
    }
    else if(option == 3)
    {
        s.balanceeneuiry();
    }
    else if(option == 4)
    {
        s.accountdetails();
    }
    else
    {
        std::cout<<"Invalid Option"<<std::endl;
    }
    return 0;
}