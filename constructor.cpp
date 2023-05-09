#include<iostream>
using namespace std;
class student 
{float numb;
public:
student(){}
student(float a)
{numb=a;
cout<<numb;
}
student(int a,float b)
{  numb=((float)a)+(b);
    cout<<numb<<endl;
}

};

int main()
{
  student s1,s2,s3;
  s2=student(9,8.9f);
  s3=student(9.8);

return 0;
}