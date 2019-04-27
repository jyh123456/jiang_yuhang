#include <iostream>
#include<array>
using namespace std;

int main()
{
    int i=0;
    float biggest=0;
    float smallest=0;
    array<float,99>w;
    for(size_t i=0;i<w.size();i++)
    w[i]=i;
    for(size_t i=0;i<w.size();i++)
    {
        biggest=w[i];
        if(w[i+1]>w[i])
        biggest=w[i+1];
    }
    cout<<"Max: "<<biggest;
    for(size_t i=0;i<w.size();i++)
    {
        smallest=w[i];
        if(w[i+1]<w[i])
        smallest=w[i+1];
    }
    cout<<"\nMin: "<<smallest;
    return 0;
}
