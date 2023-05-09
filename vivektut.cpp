#include<iostream>
#include<string.h>
using namespace std;

class vivektut
{
   protected:
   int a;
   string tutname;
   public:
   vivektut(int tutnum,string tn)
   {
         a=tutnum;
         tutname=tn;
   }
   virtual void display()
   {
     cout<<"tutorialnumber: "<<a<<endl<<"tutname: "<<tutname;      
   }

};
class vivekvideotut:public vivektut
{
public:
int videonumber;
string videoquality;
public:
vivekvideotut(int vn,int tn,string vq,string tname):vivektut(tn,tname)
{
videonumber=vn;
videoquality=vq;
}
void display()
{
    cout<<"videonumber: "<<videonumber<<endl<<"videoquality: "<<videoquality<<endl<<"tutorialname :"<<a<<endl<<"tutname: "<<tutname;
}

};

int main()
{
vivekvideotut s1(1,2,"best","constructors");
vivektut *ptr;
ptr=&s1;
ptr->display();    

return 0;
}