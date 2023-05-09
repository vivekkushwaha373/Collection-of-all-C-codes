#include<iostream>
#include<fstream>
/* 
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream--> derived from fstreambaseclass
3. ofstream--> derived from fstreambaseclass
*/
// in order work with files in c++,you will have to open the file,there are 2 ways to open a file:
//1. using the constructor
//2. using the member function open() of the class
//3. 
using namespace std;
int main()
{
string st = "I love you zainab";
ofstream vivek("sample60.txt");//vivek is an object of child class ofstream`                  
vivek<<st;
    return 0;

}