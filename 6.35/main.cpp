#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
    int first=0;
    int number=0;
    int next=0;
    int Number=0;
    int i=1;
    srand(static_cast<unsigned int>(time(0)));
    cout<<"I have a number between 1 and 1000.";
    cout<<"\nCan you guess my number?";
    cout<<"\nPlease type your first guess.\n";
    cin>>first;
    number=first;
    Number=(1+rand()%1000);
    for(;number!=Number;i++)
{
    if(number<Number)
  {
    cout<<"Too low.Try again.\n";
    cin>>next;
    number=next;
  }
    else if(number>Number)
  {
    cout<<"Too high.Try again.\n";
    cin>>next;
    number=next;
  }

}
    cout<<"Excellent!You guess the number!\nWould you like to play again(y or n)?";
    if(i<10)
    cout<<"\nEither you know the secret or you got lucky!";
    else if(i=10)
    cout<<"\nAhah! You know the secret!";
    else if(i>10)
    cout<<"\nYou should be able to do better!";
    return 0;
}
