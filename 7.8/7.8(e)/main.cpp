#include <iostream>
#include<array>
#include<iomanip>
using namespace std;

int main()
{
    int i=0;
    int j=11;
    int k=22;
    array<double,11>a={1,2,3,4,5,6,7,8,9,10,11};
    array<double,45>b={12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45};
    array<double,11>c={};
    array<double,34>d={};
    while(i<=10)
    {
        c[i]=b[i];
        b[i]=a[i];
        i++;
    }
    while(j<=33)
    {
        d[j]=b[j];
        j++;
    }
    while(j<=21,i<=10)
    {
        b[j]=c[i];
        j++;
        i++;
    }
    while(k<=44,j<=33)
    {
        b[k]=d[j];
        k++;
        j++;
    }


    cout << "Element"<<setw(13)<<"Value"<<endl;
    for(size_t x=0;x<b.size();x++ )
        cout<<setw(7)<<x<<setw(13)<<b[x]<<endl;
    return 0;
}
