#include<iostream>
using namespace std;
class employee 
{
  int id;
  public:
  void setid()
  {  
     cout<<"enter your id : ";
     cin>>id;
  }
  void display()
  {
      cout<<"your id is : "<<id<<endl;
  }
};

int main()
{ employee fb[10];

for(int i=0;i<10;i++)
{
    fb[i].setid();
    fb[i].display();
}

    return 0;
}