#include<iostream>
// using namespace std;
namespace vivek
{
void fun(int );
}
void vivek :: fun(int a)
{
// using namespace std;
std::cout<<"vivek ka birthday "<<a<<" hai";
}

int main()
{
std:: cout<<"vivek ka ag birthday hai\n";
vivek::fun(12);
return 0;
}