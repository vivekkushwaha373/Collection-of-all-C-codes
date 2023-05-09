#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream input;
    input.open("sample60.txt");
    string s1;
    while(input.eof()==0)
    {
      input>>s1;
      cout<<s1<<" ";

    }
    
    input.close();
    return 0;
}