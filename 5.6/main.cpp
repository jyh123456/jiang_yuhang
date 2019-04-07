#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    int average=0;
    int value=0;
    cout<<"Please input values that you want to calculate the average or 9999 to quit:";
    cin>>value;
    for(int i=1;value!=9999;i++)
    {

        sum+=value;
        average=sum/i;
        cin>>value;


    }
    cout<<"The average value is "<<average<<endl;
    return 0;
}
