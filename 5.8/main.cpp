#include <iostream>

using namespace std;

int main()
{
    int number=0;
    int smallest=0;
    int integer=0;
    cout<<"Please input the number of integers and enter integers in order: ";
    cin>>number>>smallest;
    for(int i=2;i<=number;i++)
    {
        cin>>integer;
        if(integer<smallest)
            smallest=integer;
    }
    cout<<"The smallest integer is: "<<smallest<<endl;
    return 0;
}
