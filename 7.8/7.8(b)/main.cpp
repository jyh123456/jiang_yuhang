#include <iostream>
#include<array>
using namespace std;

int main()
{
    float number=0;
    array<float,5>grades;
    cout<<"Enter a number: ";
    cin>>number;
    grades[4]=number;
    cout<<grades[4];
    return 0;
}
