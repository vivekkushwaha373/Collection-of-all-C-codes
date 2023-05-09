#include<iostream>
using namespace std;
class vivek
{   public:
    int static id;
    public:
    static void assign(int);
};
int vivek:: id=9;
void vivek :: assign(int a)
{
    id=a;
}
int main()
{
    vivek s1;
    vivek::id=10;
    cout<<vivek::id<<endl;
    cout<<s1.id;
    vivek :: assign(6);
    cout<<endl<<s1.id;
    return 0;
}