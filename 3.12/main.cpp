#include <iostream>
#include"Account.h"
using namespace std;

int main()
{
    Account account1("10")
    account1.getBalance();
    cout<<"请输入你要存入的金额：\n";
    int a;
    cin>>a;
    account1.credit(b);
    account1.getBalance();
    cout<<"请输入你要取出的金额：\n";
    int b;
    cin>>b;
    account1.getBalance();
    Account account2("20")
    account2.getBalance();
    cout<<"请输入你要存入的金额：\n";
    int c;
    cin>>c;
    account2.credit(c);
    account2.getBalance();
    cout<<"请输入你要取出的金额：\n";
    int d;
    cin>>d;
    account2.getBalance();

    return 0;
}
