#include <iostream>
#include<array>
#include<iomanip>
using namespace std;

int main()
{
    array<int,5>bestScores={1,2,3,4,5};
    cout<<"Element"<<setw(13)<<"Value"<<endl;
    for(size_t i=0;i<bestScores.size();i++)
    cout<<setw(7)<<i<<setw(13)<<bestScores[i]<<endl;
    return 0;
}
