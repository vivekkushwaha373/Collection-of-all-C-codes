#include<iostream>
#include<fstream>
using namespace std;
int main()
{
string s1=" vivek kushwaha";
string s2;
ifstream in("sample60.txt");// in is the object of child class 'ifstream' 
// in>>s2;
getline(in,s2);//
cout<<s2;

    return 0;
}