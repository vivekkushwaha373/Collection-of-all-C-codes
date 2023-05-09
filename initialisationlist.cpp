#include<iostream>
using namespace std;

class test
{
   int a;// a initized first
   int b; //b(7),a(b+100) will give an error because a has been initialused first
   public:
   test():a(4),b(a+9)
   { 
     cout<<"the value of a is : "<<a<<endl;
     cout<<"the valus of b is : "<<b;

   }


};
int main()
{
test s1;


return 0;
}
