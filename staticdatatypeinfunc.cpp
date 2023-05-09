#include<iostream>
using namespace std;
inline int product(int ,int );
inline int product(int a,int b)
{    int static c=0;
     c++;
//    c++;
//    c=c+1;   // these three are same
//    c+=1;
    return a*b+c;
}
int main()
{
    int a,b;
    cout<<"enter the first value"<<endl;
    cin>>a;
    cout<<"enter the second value"<<endl;
    cin>>b;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    return 0;
}
