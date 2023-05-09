#include<iostream>
using namespace std;
int main()
{
 int *ptr[2];
 int a=8,b=9;
 ptr[0]=&a;
 ptr[1]=&b;
 
 for(int i=0;i<2;i++)
 {
     cout<<*ptr[i]<<endl;
 }
int *p = new int(6);//dynamic memory allocation hai bhaiyo
cout<<p[0];

}