#include <iostream>
#include <cmath>
using namespace std;

int inverse(int x)
{

    double a=0;
    double y=0;
    if(10<x&&x<100)
{
    for(int i=1;x>=10;i--)
    {

        a=x%10;
        x/=10;
        y+=a*pow(10,i);
    }
    y+=x;
}
    else if(100<x&&x<1000)
{
    for(int i=2;x>=10;i--)
    {

        a=x%10;
        x/=10;
        y+=a*pow(10,i);
    }
    y+=x;
}
    else if(x>1000)
{
    for(int i=3;x>=10;i--)
    {

        a=x%10;
        x/=10;
        y+=a*pow(10,i);
    }
    y+=x;
}
    return y;
}
int main()
{
    int num=0;
    cout <<"Enter a number from 10 to 9999: ";
    cin>>num;
    cout<<"The number with its digits reversed is: "<<inverse(num)<<endl;
    return 0;
}
