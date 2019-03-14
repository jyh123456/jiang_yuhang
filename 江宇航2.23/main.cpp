#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,c=0,d=0,e=0;
    cout<<"Enter five numbers:";
    cin>>a>>b>>c>>d>>e;
    if(a>b&&a>c&&a>d&&a>e)
        cout<<"Largest is "<<a;
    if(b>a&&b>c&&b>d&&b>e)
        cout<<"Largest is "<<b;
    if(c>a&&c>b&&c>d&&c>e)
        cout<<"Largest is "<<c;
    if(d>a&&d>b&&d>c&&d>e)
        cout<<"Largest is "<<d;
    if(e>a&&e>b&&e>c&&e>d)
        cout<<"Largest is "<<e;
    if(a<b&&a<c&&a<d&&a<e)
        cout<<"\nSmallest is "<<a;
    if(b<a&&b<c&&b<d&&b<e)
        cout<<"\nSmallest is "<<b;
    if(c<a&&c<b&&c<d&&c<e)
        cout<<"\nSmallest is "<<c;
    if(d<a&&d<b&&d<c&&d<e)
        cout<<"\nSmallest is "<<d;
    if(e<a&&e<b&&e<c&&e<d)
        cout<<"\nSmallest is "<<e;

    return 0;
}
