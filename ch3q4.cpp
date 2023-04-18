#include<iostream>
using namespace std;
int main()
{
    long one, two;
    char ch, f;
    do
    {
    cout<<"\n Enter the first number"; cin>>one;
    cout<<"\n Enter the second number"<<endl; cin>>two;
    cout<<"Enter the operation you want to do i.e. (+,-,*,/) "<<endl; cin>>ch;
    switch (ch)
    {
    case '+':
     cout<<"As you opted addition So Answer is: "<<one+two<<endl;
     break;
    case '-':
     cout<<"As you opted substraction So Answer is: "<<one-two<<endl;
     break;
    case '*':
     cout<<"As you opted Multiplication So Answer is: "<<one*two<<endl;
     break;
    case '/':
    cout<<"As you opted Division So Answer is: "<<one/two<<endl;
    break;
    default:
    cout<<"Wrong operator entered"<<endl;
    break;
    }
    cout<<"Do u want to continue(y/n)"<<endl; cin>>f;
    }
    while(f!='n');
    return 0;
}