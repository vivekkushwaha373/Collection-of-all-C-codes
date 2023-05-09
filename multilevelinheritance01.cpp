#include<iostream>
using namespace std;
class student
{
  public:
  int i;
  void getdata(int id)
  {
     i=id;
  }   

};

class marks
{
      public:
      int p,c,m;
      void setmarks(int a,int b,int c);

};

void marks :: setmarks(int a,int b,int n)
{
   p=a;
   c=b;
   m=n;

}
class result : public student,public marks
{
  public:
  void getresult()
  { 
    cout<<"result= "<<(p+c+m)/3;

  }
};
int main()
{    marks p1;
     result s1;
     s1.setmarks(90,90,90);
     s1.getresult();


    return 0;
}