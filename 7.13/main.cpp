#include <iostream>
#include<array>
#include<iomanip>
using namespace std;

int main()
{
    int i=0;
    int j=0;
    int number=0;
    cout<<"Enter 20 numbers between 10 and 100: ";
    array<int,4>numbers={};
    for(;i<=3;i++)
    {
        cin>>number;


        if(numbers[i]=numbers[i-1])
        numbers[i]=0;
        else
                 numbers[i]=number;
    }
    array<int,20>valids={};


    cout<<"Element"<<setw(13)<<"Value"<<endl;
    for(size_t k=0;k<numbers.size();k++)
    cout<<setw(7)<<k<<setw(13)<<numbers[k]<<endl;

}

