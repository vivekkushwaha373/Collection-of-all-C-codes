#include<iostream>
using namespace std;
int main()
{  char l1[10]="chamoli";
   char *ptr=l1;

    for(int i=0;i<10;i++)
    {
       cout<<ptr[i];
    }
    return 0;
}