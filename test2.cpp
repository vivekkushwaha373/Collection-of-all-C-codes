#include<iostream>
#include<string.h>
using namespace std;

class student 
{
    protected:
    int id;
    public:
    void assignid(int g)
    {
        id=g;
    }
  
   
};

class marks: public student 
{
protected:
int p,c,m;
public:
void marksassign(int v,int z,int y)
{
    p=v;
    c=z;
    m=y;
}

};
class name: public student 
{ 
  public:
  char sname[15];
  public:
    void display()
    {
        cout<<"the name of student id "<<id<<"is :"<<sname;
    }
};
class result : virtual public marks,virtual public name
{
public:

void sresult()
{  
    cout<<endl<<"result of student "<<sname<<"is "<<(float)(p+c+m)/100<<"%";
}

};



int main()
{  
   result s1;


   s1.assignid(1);    
   s1.display();
   strcpy(s1.sname,"vivek");
   s1.marksassign(100,100,100);
   s1.sresult();
      

    return 0;
}