#include<iostream>
using namespace std;

int sum(int a,int b)
{ 
int p;
p=a+b;
return p;
}
int sum(int a,int b,int c)
{

    return a+b+c;
}
int main()
{
  int a=9,b=0,x=8;
  cout<<sum(a,b)<<endl;
  cout<<sum(a,b,x);
return 0;
}
