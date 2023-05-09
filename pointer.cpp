#include<iostream>
using namespace std;
int main()
{
    int c=9;
    int *p;
    p=&c;
   
    

    cout<<"the address of c is "<<p<<endl;
    cout<<"the address of c is "<<&c<<endl;
    cout<<"the value of c is "<<*p<<endl;
     int **j;
    j=&p;
    
    // *j=&p;
    cout<<"the address of p is "<<&p<<endl;
    cout<<"the address of p is "<<j<<endl;
    cout<<"the value of p is "<<*j<<endl;
    cout<<"the value of c is "<<**j<<endl;
    return 0;
}