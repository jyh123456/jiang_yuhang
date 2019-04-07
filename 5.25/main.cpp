#include <iostream>

using namespace std;

int main()
{
    unsigned int count;
    int a=0;
    for(count=1;count<=10&&a!=true;count++)
    {
        if(count==4)
            a=true;
        else
            a!=true;
            cout<<count;
    }
    cout<<"\nBroke out of loop at count= "<<count<<endl;
    return 0;
}
