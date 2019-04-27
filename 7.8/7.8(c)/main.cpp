#include <iostream>
#include<array>
using namespace std;

int main()
{
    array<int,5>numbers={8,8,8,8,8};
    for(int number:numbers)
        cout<<number<<" ";
    return 0;
}
