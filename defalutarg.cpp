#include<iostream>
using namespace std;
void fun(const int=9);
void fun(const int a)//constant arguments
{
    a++;
    cout<<a;
}

int main()
{
    fun(10);   
    return 0;
}