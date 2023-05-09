#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class CWH
{
  public:
  string videotitle;
  int videonum;
  public:
  CWH(string l, int x)
  {
    videotitle=l;
    videonum=x;
  }
 
  virtual void display()=0;

  
};
class videosCWH: public CWH
{
public:
string videoquality;

videosCWH(string vt,string vq,int vn):CWH(vt,vn)
{
    videoquality=vq;
}

void display()
{
    cout<<"videoquality: "<<videoquality<<endl<<"videonumber: "<<videonum<<endl<<"videotitle: "<<videotitle;
}

};
int main()
{   
    // string vidti="pointer";
    //  string vidQ="superb";
    //  int vidn=1;
    
    
    videosCWH s1("pointer","superb",1);
    
    // s1.display();
    // videosCWH s1("a");
    CWH* ptr;
    ptr=&s1;
    ptr->display();
    
    return 0;
}