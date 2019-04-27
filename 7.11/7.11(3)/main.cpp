#include <iostream>
#include<array>
#include<iomanip>
using namespace std;

int main()
{
    const size_t arraySize=13;
    array<double,arraySize>monthlyTemperatures{0,1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<"Month"<<setw(13)<<"Temperature"<<endl;
    for(size_t i=1;i<monthlyTemperatures.size();i++)
        cout<<setw(7)<<i<<setw(13)<<monthlyTemperatures[i]<<endl;

    return 0;
}
