#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;
    cout<<"Enter 3 nonzero integers: ";
    cin>>a>>b>>c;
    if(a*a==b*b+c*c)
        cout<<"They could be sides to a right triangle";
    else if(b*b==a*a+c*c)
        cout<<"They could be sides to a right triangle";
    else if(c*c==a*a+b*b)
        cout<<"They could be sides to a right triangle";
    else
        cout<<"They could not be sides to a right triangle";
    return 0;
}
