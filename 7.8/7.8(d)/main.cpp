#include <iostream>
#include<array>
using namespace std;

int main()
{
    float sum=0;
    array<float,100>items;
    for(size_t i=0;i<items.size();i++)
        items[i]=1.1;
    for(float item:items)
        sum+=item;
    cout<<"sum: "<<sum;
    return 0;
}
