#include <iostream>

using namespace std;

int main()
{
    int i=1;
    int factorial=1;
    unsigned int integer;
    cout<<"Enter an unsigned integer: ";
    cin>>integer;
    while(i<=integer)
    {
        factorial*=i;
        i++;
    }
    while(integer<(i-1))
    {
        factorial*=i;
        i--;
    }

    cout<<"Factorial is: "<<factorial<<endl;
    return 0;
}
