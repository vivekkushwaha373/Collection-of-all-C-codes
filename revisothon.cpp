/*#include<iostream>
using namespace std;
int main()
{
int a=0;
int &x=a;
x++;
cout<<a;

return 0;
}*/
/*
#include<iostream>
#include<iomanip>
using namespace std;
//setw()
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"the value of a"<<setw(4)<<a<<endl;
    cout<<"the value of b"<<setw(4)<<b<<endl;
    cout<<"the value of c"<<setw(4)<<c<<endl;
    return 0;
}*/

// -->break and continue
#include<iostream>
using namespace std;
int main()
{
for(int i=0;i<4;i++)
{
    if(i==0)
    break;
    cout<<"hello world\n";
}    
for(int i=0;i<4;i++)
{
    if(i==0)
    continue;
    cout<<"hello world\n";
}   
return 0;
}