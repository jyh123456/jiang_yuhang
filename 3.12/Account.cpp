#include "Account.h"
#include<iostream>
using namespace std;

Account::Account(int a)

{
    if(a<0)

        rest=0;
        cout<<"你输入的初始余额无效！";


    else
        rest=a;
}
int Account::credit(int b)
{
    rest=rest+b;
    return rest;
}
int Account::debit(int c)
{
    if(c>rest)
       cout<<"Debit amount exceeded account balance!\n"
    else
    rest=rest-c;
    return rest;
}
void Account::getBalance()
{
    cout<<"你的余额为:"<<rest<<endl;
}
