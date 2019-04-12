#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

int integerPower(int x,int y)
{
    int product=1;
    for(int i=1;i<=y;i++)
    product*=x;

    return product;
}
int main()
{

    int exponent;
    int base;
    cout<<"Enter base and exponent: ";
    cin>>base>>exponent;
    cout<<"The result is: "<<integerPower(base,exponent)<<endl;
    return 0;
}






