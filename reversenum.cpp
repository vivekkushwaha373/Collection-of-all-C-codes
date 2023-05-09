#include<iostream>
using namespace std;
int main()
{
int i,reverse=0;
cout<<"enter a number "<<endl;
cin>>i;
for(int j=0;i!=0;j++)
{

reverse=reverse*10+i%10;
i=i/10;
}
cout<<"the requires number is reverse: "<<reverse;
    return 0;
}