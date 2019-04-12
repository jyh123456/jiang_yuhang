#include <iostream>

using namespace std;

 bool multiple(int x,int y)
 {
     int r=0;
     r=y%x;
     if(r==0)
        return true;
     else
        return false;
 }

int main()
{
    int a=0;
    int b=0;
    for(int i=1;i<=3;i++)
    {

        cout << "Enter two integers"<< endl;
        cin>>a>>b;
        if(multiple(a,b))
            cout<<b<<" is a multiple of "<<a<<"\n";
        else
            cout<<b<<" is not a multiple of "<<a<<"\n";
    }

}
