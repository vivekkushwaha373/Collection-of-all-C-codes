#include<iostream>
using namespace std;
class base1
{
protected:
int a;
public:
  base1(){}
  base1(int L)
  {
      a=L;
  }
  void getdata1()
  {
      cout<<a;
  }

};
class base2
{
protected:
int k;
public:
     base2(){}
     base2(int M)
     {
         k=M;
     }


};

class derived:public base1,public base2
{
   private:
   int derived1,derived2;
   public:
    derived(int c,int d,int a,int b): base1(a),base2(b) {
        derived1=c;
        derived2=d;
    }
    void getdata()
    {
        cout<<endl<<derived1<<endl<<derived2<<endl<<a<<endl<<k;
    }
};



int main()
{
    derived s1(3,5,6,7);
    base1 p1(23);
    p1.getdata1();
    s1.getdata();

    return 0;
}