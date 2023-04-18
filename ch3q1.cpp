#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int tb;
    cout<<"\n Enter the number whose table is to be find"<<endl; cin>>tb;
    for(int j=1;j<=200;j++)
        {
            cout<<setw(5)<<j*tb<<"  ";
        if((j%10)== 0)
        cout<<endl;
        }
    return 0;
}