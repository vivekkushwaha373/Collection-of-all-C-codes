#include<iostream>
using namespace std;
int main()
{
    int L1,L2,p=0,N,k=0,m=0;
    int A[10],B[10],s[10];
    cout<<"enter L1"<<endl;
    cin>>L1;
    cout<<"enter L2"<<endl;
    cin>>L2;
    cout<<"enter the Nth element of summation"<<endl;
    cin>>N;
    for(int i=0;i<L1;i++)
    { cout<<"enter the "<<i+1<<" number";
        cin>>A[i];
    }
    for(int i=0;i<L2;i++)
    {cout<<"enter the "<<i+1<<"number";
        cin>>B[i];
    }
    for( int i=0;i<L1;i++)
    {
        for(int j=0;j<L2;j++)
        {
            s[p]=A[i]+B[j];
            p++;
        }
    }
    cout<<"value of p is "<<p<<endl;
    for(int i=0;i<p;i++)
    {
        
        for(int j=i+1;j<p;j++)
        {
            if(s[i]==s[j])
          {  cout<<s[j]<<endl;}
        }
        cout<<"finished";
    }
    cout<<"required array is: "<<endl;

    for(int i=0;i<p;i++)
    {
        cout<<" "<<s[i];
    }
    cout<<endl<<"the "<<N<<"th element of summation is : "<<s[N-1]; 
    return 0;

}