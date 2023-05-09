#include<iostream>
using namespace std;

class account
{
 
 static int val;              /* this is class variable that's why object doesn't
                             get memory when static variable declared inside class*/
   
};

int main()
{ account s1;
cout<<sizeof(s1);

    return 0;
}