#include <iostream>

using namespace std;

inline double area(const double x)
{
    return 3.14*x*x;
}
int main()
{
    double s=0;
    double r=0;
    cout<<"Enter r: ";
    cin>>r;
    cout<<"s= "<<area(r)<<endl;
    return 0;
}
