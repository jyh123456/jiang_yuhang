#include <iostream>

using namespace std;

int main()
{
    double a=0;
    double b=0;
    double c=0;
    cout<<"Enter 3 nonzero numbers: ";
    cin>>a>>b>>c;
    if(a>b+c)
        cout<<"They could be sides to a triangle.";
    else if(b>a+c)
        cout<<"They could be sides to a triangle.";
    else if(c>a+b)
        cout<<"They could be sides to a triangle.";
    else
        cout<<"They could not be sides to a triangle.";



    return 0;
}
