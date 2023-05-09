#include<iostream>
using namespace std;

class data
{
   int p,y;
   float i;
   public:
    void display()
    {
        cout<<"principle is "<<p<<endl<<"interest is "<<i<<endl<<"year is "<<y<<endl;
      
    }

    data(int principle,float interest,int year)
    {
        p=principle;
        i=interest;
        y=year;
        for(int l=0;l<y;l++)
      {
            p=p*(i+1);
      }
      cout<<"total amount is "<<p;

    }
    data(int principle,int interest,int year)
    {
        p=principle;
        i=float(interest)/100;
        y=year;
          for(int l=0;l<y;l++)
      {
            p=p*(i+1);
      }
      cout<<"total amount is "<<p;
    }
    data()
    {
    }
    
};


int main()
{  int amount,numyear;
float rate;
//    cin>>"enter principle=">>amount>>endl>>"enter interest=">>rate>>endl>>"enter year=">>numyear;
   cin>>amount>>rate>>numyear;
   
     data c2;
    data c1=data(amount,rate,numyear);
  
  
   
    // data c2(amount,rate,numyear);
       
    
    return 0;
}
