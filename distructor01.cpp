#include<iostream>
using namespace std;
class complex
{
  int x,y;
  
  friend void display(complex s1,complex s2);
  public:
   ~complex()
  {
    cout<<"she was wonderful not because she was beautiful"<<endl;
  }
  complex(int a,int b)
  { 
  x=a;
  y=b;
  }
 

complex(complex s1,complex s2)
{
   
   x=s1.x+s2.x;
   y=s1.y+s2.y;
  

}


};
void display(complex s1,complex s2)
{ int m=s1.x+s2.x;
  cout<<m<<endl;
}
// complex::complex(complex s1,complex s2)



int main()
{ 
 complex s1(2,4),s2(5,6),s3(s1,s2);
//  s1.assign(2,4);
//  s2.assign(5,6);
display(s1,s2);

return 0;
}

