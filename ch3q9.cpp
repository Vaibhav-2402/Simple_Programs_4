#include<iostream>
using namespace std;
int main()
{
    int chairs, guests, k=1;
    cout<<"\n enter number of guests: "; cin>>guests;
    cout<<"\nEnter number of chairs: "; cin>>chairs;
    for(int i=1,j=guests;i<=chairs;i++,j--)
    {
         k=k*j;
    }
    cout<<"\n Possible arrangmemnts = "<<k<<endl;;
    return 0;
}