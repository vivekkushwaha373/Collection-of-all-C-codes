#include<iostream>
using namespace std;
int main()
{  
    int age ;
    cout<<"enter your age "<<endl;
    cin>>age;
    if(age<18)
    {
        cout<<"you are not allowed for the party";
    }
    else if(age==18)
    {
        cout<<"you are allowed for the party and you get a kid pass"<<endl;
    }
    else
    {
        cout<<"you are allowed for the party";
    }

    return 0;
}