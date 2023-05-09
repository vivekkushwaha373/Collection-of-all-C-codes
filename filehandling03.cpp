#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   ifstream ininput("sample1.txt");
   string s1;
   getline(ininput,s1);
   cout<<
   s1;
   getline(ininput,s1);
   cout<<s1;
   ininput.close();

   return 0;
}