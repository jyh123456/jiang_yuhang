#include <iostream>
#include<array>
#include<iomanip>
using namespace std;

int main()
{
    array<int,10>counts={};

    cout<<"Element"<<setw(13)<<"Value"<<endl;
    for(size_t i=0;i<counts.size();i++)
        cout<<setw(7)<<i<<setw(13)<<counts[i]<<endl;
    return 0;
}
