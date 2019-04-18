#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int flip()
{
    int x=rand()%2;
    return x;
}
int main()
{
    int headsCount=0;
    int tailsCount=0;
    srand(static_cast<unsigned int>(time(0)));
    for(int roll=1;roll<=100;roll++)
{
    int face=flip();
    switch(face)
    {
     case 1:
     ++headsCount;
     break;
     case 0:
     ++tailsCount;
     break;
     default:
     cout<<"Program should never get here!";
    }
}
     cout<<"The number of Heads is: "<<headsCount<<endl;
     cout<<"The number of Tails is: "<<tailsCount<<endl;

    return 0;
}

