#include <iostream>

using namespace std;

int main()
{
    int i=1;
    int factorial=1;
    double e=1.0;
    int accuracy=0;
    cout<<"Enter the accuracy of e: ";
    cin>>accuracy;
    while(i<accuracy)
    {
        factorial*=i;
        e+=1.0/factorial;
        i++;
    }
    cout<<"e= "<<e<<endl;
    return 0;
}
