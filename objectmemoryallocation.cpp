#include<iostream>
using namespace std;
class employee
// memory allocation for object
{  public:
   int i;
   int salary[100];
   int tax[100];
   public:
   void display(int);

};
void employee :: display(int a)
{ 
    // int  i=0;
  salary[0]=a;
  cout<<"salary at  is "<<salary[0]<<endl;
//   i++;
}

int main()
{ 
    employee s1,s2;
    // cout<<sizeof(s1);  
    s1.display(4);
    s2.display(9);
    cout<<endl<<s1.salary[0];
    cout<<endl<<s2.salary[0];
    // s1.display(4);
    // s1.display(9);
    // s1.display(11);
    // s1.display(23);
    // s1.display(15);
    return 0;
}