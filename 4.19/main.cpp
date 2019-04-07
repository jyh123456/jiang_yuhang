#include <iostream>

using namespace std;

int main()
{
    int i=2;
    int number=0;
    int first=0;
    int second=0;
    cout<<"Please input 10 different numbers: ";
    cin>>first>>number;
    if(number>second)
        {
        second=first;
        first=second;
        }
    while(i<10)
    {
            cin>>number;
            if(number>first)
                {second=first;
                first=number;}
            else if(number>second)
                {second=number;
                i++;}

    }
    cout<<"The first largest number is: "<<first<<"\nThe second largest number is: "<<second<<endl;
    return 0;
}
