#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse(double x,double y)
{
    double result=0;
    double a=0;
    a=x*x+y*y;
    result=sqrt(a);
    return result;
}
int main()
{
    double side1=0;
    double side2=0;
    double side3=0;
    for(int i=1;i<=3;i++)
   {
    cout<<"Enter two sides: ";
    cin>>side1>>side2;
    side3=hypotenuse(side1,side2);
    cout<<side3<<endl;
   }

    return 0;
}
