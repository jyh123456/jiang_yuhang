#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout<<"��������������: ";
    cin>>x>>y;
    if (x>y)
        cout<<x<<"is larger";
    if (x<y)
        cout<<y<<"is larger";
    if (x==y)
        cout<<"These numbers are equal";
    return 0;
}
