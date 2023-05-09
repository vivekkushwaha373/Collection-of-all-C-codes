#include<iostream>
using namespace std;
float returnoninvestment(int,float);
float returnoninvestment(int a,float b=1.04)
{

    return a*b;
}
int main()
{  
    int x;
    float y;
    cout<<"press 1 if  you want to enter perecentge return and 0 if you don't"<<endl;
    cin>>y;
    if(y==1.0)
    {
        cout<<"percentage return = ";
        cin>>y;
    }
    else if(y==0)
    y=1.04;
    cout<<"enter your principle amount"<<endl;
    cin>>x;
    cout<<"anuall return = "<<returnoninvestment(x,y);
    


    return 0;
}