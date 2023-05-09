#include<iostream>
using namespace std;

class fruit
{  public:
   
   char fname[100];
   int fruitnum;
  
   fruit(char s[])// it is act as function  by call
   { 
       int i;
    fruitnum=3;
       for( i=0;s[i]!='\0';i++)
       {
           fname[i]=s[i];
      }
      cout<<i<<endl;
      fname[i]='\0';
              

    //   for(int i=0;i<=5;i++)
    //   {cout<<fname[i];}
    //    printf("%s",fname);
       cout<<fname;
       cout<<endl<<fruitnum;
   }
fruit(){}


};
/*
default visibilty mode is private
private -> public member of the base class will be inherited privately in the derived class
public-> public member of the base class will be become public in the derived class
private member of the base class cannot be inherited 
 */

class fruittype : public fruit
{
 public:
  fruittype(int k)
  {
      fruitnum =k;
  }
  void display(void)
  {
     cout<<endl<<"fruitid is "<<fruitnum;

  }

};
int main()
{   char ptr[]="orangafgfh";
    fruit s1(ptr);
    fruittype p1(6);
    p1.display();

    return 0;
}

   /*
                            public          private           protected
            private         non inheritale      ''                ''
            public          public          private           protected
            protected       protected       private           protected

            */