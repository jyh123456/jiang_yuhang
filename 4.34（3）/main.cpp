#include <iostream>

using namespace std;

int main()
{

    int i=1;
    int a=0;
    int factorial=1;
    double e=1.0;
    int accuracy=0;
    double exponent=1.0;
    int x=0;
    cout<<"Enter the accuracy of e: ";
    cin>>accuracy;
    cout<<"Enter exponent: ";
    cin>>x;
    while(i<accuracy)
    {

        exponent*=x;
        factorial*=i;
        e+=exponent/factorial;
        i++;
    }
    cout<<"The result is: "<<e<<endl;
    return 0;
}
