#include <iostream>
#include<array>
#include<iomanip>
using namespace std;

int main()
{
    array<int,10>bonus={};
    for(size_t j=0;j<bonus.size();j++)
    bonus[j]+=1;
    cout<<"Element"<<setw(13)<<"Value"<<endl;
    for(size_t i=0;i<bonus.size();i++)
        cout<<setw(7)<<i<<setw(13)<<bonus[i]<<endl;
    return 0;
}
