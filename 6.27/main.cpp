#include <iostream>

using namespace std;

double minimum(double x,double y,double z)
{
    double res=0;
    res=x;
    if(y<x)
    res=y;
    if(z<y)
    res=z;
    return res;
}
int main()
{
    double a=0;
    double b=0;
    double c=0;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
    cout<<"The smallest number is "<<minimum(a,b,c)<<endl;
    return 0;
}
