#include <iostream>

using namespace std;

int inverseNumber(int);

int main()
{
    int number=0;
    cout << "Enter a number: " << endl;
    cin>>number;
    inverseNumber(number);

    return 0;
}
int inverseNumber(int x)
{

    while(x>=1)
    {
       int i=x%10;
        cout<<i;
        x/=10;
    }
}
