#include<iostream>

using namespace std;

class account 
{public:
static int count; //this is declation by default the value assigned to static member variable(count)  is 0
                  // this count is class varibale
};
int account :: count;// definition -->it is very important define static varibale outside 
int main()

{   account harry; 
    account :: count=9;// you can inisialize value through the help of class itself;
    harry.count=10;  // you can also initialize value with the help of object 
    cout<<harry.count;
    return 0;
}