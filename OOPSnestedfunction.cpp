#include<iostream>
using namespace std;
class employee
{  int s;
  public:
  void entr();// declaration only
  void check();
  void display();// declaration only
  int enterval(int);
};
int employee :: enterval(int a)
{
    
    if(s==a)
    return a;
    else
    return s;

}

void employee :: entr(void)
{
cout<<"enter a value";
  cin>>s;

}
void employee :: check(void)
{
 if(s==0 || s==1)
 {
    cout<<"boolean"<<endl;
 }
 else
  cout<<"it is not boolean";
  display();

}
void employee :: display(void )
{
  cout<<s;
}


int main()
{
   employee s1;
   s1.entr();
   s1.check();
   s1.display();
   cout<<s1.enterval(6);
    return 0;
 
}