#include<iostream>
using namespace std;
int main()
{
   int age;
   cout<<"enter your age"<<endl;
   cin>>age;
   switch(age)
   {
     case 18:
       cout<<"your age is 18";
       break;
     case 21:
        cout <<"your age is 21";
        break;
     case 25:
        cout<<"your age is 25";
        break;

     default :
        cout<<"invalid age you have entered";



   }

    return 0;
}