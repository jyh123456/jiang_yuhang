#include <iostream>

using namespace std;

int celsius(int f)
{
        int c=0;
        c=(f-32)/1.8;
        return c;
}
int fahrenheit(int c)
{
        int f=0;
        f=1.8*c+32;
        return f;
}
int main()
{
        int i=0;
        int j=32;
        int C=0;
        int F=0;
        cout<<"C\tF\n";
        for(;i<=100;i++)
        {
            F=fahrenheit(i);
            cout<<i<<"\t"<<F<<"\n"<<endl;
        }

        cout<<"F\tC\n";
        for(;j<=212;j++)
        {
            C=celsius(j);
            cout<<j<<"\t"<<C<<"\n"<<endl;
        }



        return 0;
}


