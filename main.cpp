


8.10
#include <iostream>

using namespace std;

void zero(long bigIntegers[]);//±àÐ´º¯ÊýÍ·²¿
int add1AndSum(int oneTooSmall[]);
int main()
{



}

void zero(long bigIntegers[])
{

}



8.11
#include <iostream>

using namespace std;

int main()
{
    //number未申明变量；
   //(a)
       int *number;
    cout<<*number;
    //(b)不同类型的变量不可赋值
    double *realPtr;
    double *integerPtr;
    integerPtr=&realPtr;
    cout<<integerPtr;
    //
    int *x,y;
    x=&y;
    //

   char s[]="this is a character array";
    char *sPtr=s;
    for( ;*sPtr!='\0';++sPtr)
        cout<<*sPtr;
    //
    short *numPtr,result;
    void *genericPtr=&numPtr;
    result=*genericPtr+7;
    //
    double x=19.34;
    double *xPtr=&x;
    cout<<*xPtr<<endl;
}



8.13
//把字符串string2连接在string1的后面

#include <iostream>

using namespace std;

int main()
{
    char string1[80];
    char string2[80];

    cout<<"Enter two strings: ";
    cin>>string1>>string2;

    cout<<string1<<endl;


    int i=0;

    while(string1[i]!='\0')
        ++i;
    for(int j=0;(string1[i]=string2[j]);++i,++j)
        ;

    cout<<string1<<endl;
}



8.14
//计算字符串的长度
