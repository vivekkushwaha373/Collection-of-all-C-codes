#include<iostream>
using namespace std;
int factorial(int);// function prototype
int fib(int);
int fib(int n)
{
  if(n<2)
  {
    return n;
    }
 return fib(n-2)+fib(n-1);
}
int factorial(int n)// function definition

{   if(n==1 || n==0)
  return 1;
    
    return n*factorial(n-1);
}
int summation(int n)                                    // 1 1 2 3 5 8 13 21 34
{
if(n==0)
return 0;

return n+summation(n-1);

}
int main()
{
    int a;
    cout<<"enter a value "<<endl;
    cin>>a;
    cout<<endl<<factorial(a);//function call
    cout<<endl<<summation(a);
    cout<<endl<<fib(a);
    return 0;
}
/*
explanation
function jaha se call hoga wahi se value return karega


*/