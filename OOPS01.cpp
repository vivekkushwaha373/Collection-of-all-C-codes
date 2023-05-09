#include<iostream> //-> classes publi and private
using namespace std;
class employee 
{
    
    int a,b,c;
    public:               // by default variables declared in class are private 
    int e,d;
     
    inline void sum(int a1,int b1,int c1=8)
    {
    a=a1;
    b=b1;
    c=c1;
}
    void print()
    {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        cout<<e<<endl;
    }

};
//  void employee :: sum(int a1,int b1,int c1)
// {
//     a=a1;
//     b=b1;
//     c=c1;
// }

int main()
{
  employee s1;
  s1.sum(2,3);
   s1.e=9;
  s1.d=7;
  s1.print();
 
  

}