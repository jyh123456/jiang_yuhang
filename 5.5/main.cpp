#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    int number=0;
    int integer=0;
    cout<<"Enter the number of integers to be summed and input them in order";
    cin>>number;
    for(int i=1;i<=number;i++)
    {
        cin>>integer;
        sum+=integer;

    }
    cout<<"Sum of the "<<number<<" integers is "<<sum<<endl;
    return 0;
}
