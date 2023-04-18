#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    char ch;
     unsigned long total=0;
    cout<<"\n Enter the six digits you want ";
    while((ch=getche())!='\r')
    {
        total=total*10+ch-'0';
    }
    cout<<"\n Your number is "<<total<<endl;    
    return 0;
}