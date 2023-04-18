#include<iostream>
using namespace std;
int main()
{
    int rows, space;
    cout<<"\n enter number of rows"<<endl;
    cin>>rows;
    for(int i=1,k=0;i<=rows;++i,k=0)
    {
        for (space=0; space<=rows-i; ++space)
        {
            cout<<" ";
        
        }
        while(k!=2*i-1)
        {
            cout<<"*";
            ++k;
        }
        cout<<endl;
        }
    
     return 0;
}
