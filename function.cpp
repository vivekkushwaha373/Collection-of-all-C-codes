#include<iostream>
using namespace std;
int sum(int x,int y);//function prototypr or functikon definition
int sumswap(int*,int*);
int main()
{
  int a,b;
  cout<<"Enter the first number"<<endl;
  cin>>a;
  cout<<"enter the second number"<<endl;
  cin>>b;
  cout<<endl<<"result= "<<sum(a,b);
  cout<<endl<<"the value of a = "<<a<<endl;
  cout<<"the value of b = "<<b<<endl;
  cout<<"result= "<<sumswap(&a,&b);
   cout<<endl<<"the value of a = "<<a<<endl;
  cout<<"the value of b = "<<b<<endl;

  return 0;
}
int sumswap(int* p,int* q)//->caall by value 
{
  int temp;
  temp=*p;
  *p=*q;
  *q=temp;
  return *p+*q;
}
int sum(int a,int b)//->call by reference
{
    
  return a+b;

}