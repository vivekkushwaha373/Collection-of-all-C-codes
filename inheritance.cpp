/* single inheritance*/
#include<iostream>
using namespace std;
//vivsibility mode ---->private, public, and protected;
//private memebers cannot be inherited
class student
{
public:
string name;
student(string s)
{
name=s;
}
void display()
{
    cout<<endl<<name;
}
};
class marks
{protected:
    int physics;
    int chemistry;
    int maths;
    marks(int p,int c,int m)
    {
        physics=p;
        chemistry=c;
        maths=m;
    }
    void display()
    {
        cout<<physics<<endl<<chemistry<<endl<<maths;
    }
};
class result : public student,public marks
{
public:
float resul;
void display()
{
    marks::display();
}
result(int a,int b,int c): student("harry"), marks(a,b,c)
{   
    resul=(float)(a+b+c)/3;
    cout<<resul<<endl;
}
};
int main()
{ 

  result s2(100,100,99);
  s2.display();

    return 0;
}