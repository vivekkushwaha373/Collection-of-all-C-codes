#include<iostream>
using namespace std;
class account 
{
   int id;
   static int count;// this will not going take memory in object;
   public:
   void setdata();
   void getdata();
   static void assign( int);
   void display();
  
};

void account :: display()
 {
       cout<<endl<<count;
       count++;
   }

void account :: assign(int a)
{
 count = a;

}
int account :: count;

void account :: setdata()
{
 cout<<"enter a value"<<endl;
 cin>>id;
}
void account :: getdata()
{
    cout<<endl<<"the value of id you entered is "<<id;
} 

int main()
{
    account s1,s2;
    s1.setdata();
    s1.getdata();
    account :: assign(5);// this function call without static funtion cannot be called,you need to call through object in that case
    s1.display();
    s2.display();
    return 0;
}