#include<iostream>
using namespace std;
int main()
{
int choice;
do{
int a,b;
cout<<endl;
cout<<"Calculator program, Options are : 1. Add 2.Subtract 3.Divide 4.Multiply"<<endl;
cin>>choice;
cout<<"enter Two numbers"<<endl;
cin>>a;
cin>>b;
switch(choice)
{
case 1:
    cout<<"Addition is "<<a+b <<endl;
    break;

case 2:
    cout<<"Difference is "<< a-b<<endl;
    break;
case 3:
    cout<<"Division result is "<<a/b<<endl;
    break;
case 4:
    cout<<"Product result is "<<a*b<<endl;
    break;

case 5:
    break;
}
}while(choice!=5);
}