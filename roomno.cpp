#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a[2];

    cout<<"enter room no 1: ";
    cin>>a[0];
    cout<<"enter room no 2: ";
    cin>>a[1];
    cout<<"room change: "<<endl;
    if(a[1]%10==0)
    {
        a[1]=a[1]-1;
    }
     if(a[0]%10==0)
    {
        a[0]=a[0]-1;
    }
    cout<<abs((a[0]/10)-(a[1]/10));
    
    return 0;
}