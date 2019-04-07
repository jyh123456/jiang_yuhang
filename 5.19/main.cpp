#include <iostream>

using namespace std;

int main()
{
    int i=0;
    double pi=0;
    int a=1;
    cout<<"x\tpi\n";
    for( i=1;i<=1000;i++)
    {
        if(i%2!=0)
            pi+=4.0/a;
        else
            pi-=4.0/a;
            a+=2;
        cout<<i<<'\t'<<pi<<'\n';
    }

    return 0;
}
