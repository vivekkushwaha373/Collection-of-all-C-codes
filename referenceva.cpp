#include<iostream>
using namespace std;
int main()
{
    int c=9,k=1;
    int &y=c;
    int &i=k; int tem;
    tem=y;
    y=i;
    i=tem;
    // y++;
    
    
    // c=14;// all the changes in c takes place in y and vice-versa.
    // c=101;
    cout<<"the value of c is "<<c<<" and "<<k;
    return 0;
}
