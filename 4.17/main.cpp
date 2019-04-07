#include <iostream>

using namespace std;

int main()
{
    int number;
    int largest;
    int counter=1;
    cout<<"Please input 10 numbers: ";
    cin>>largest;

    while(counter<10)
    {
        cin>>number;
        if(number>largest)
        largest=number;
        counter++;
    }
    cout<<"The largest number is: "<<largest<<endl;
    return 0;
}
