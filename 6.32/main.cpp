#include <iostream>

using namespace std;

int qualityPoints(int x)
{
    int y=0;
    if(x<60)
        y=0;
    else if(x>=60&&x<=69)
        y=1;
    else if(x>=70&&x<=79)
        y=2;
    else if(x>=80&&x<=89)
        y=3;
    else if(x>=90&&x<=100)
        y=4;
    return y;
}
int main()
{
    int point=0;
    cout << "Enter a point: "<< endl;
    cin>>point;
    cout<<"Quality point is: "<<qualityPoints(point)<<endl;
    return 0;
}
