#include<iostream>
#include<fstream>
using namespace std;
int main()
// {
//     ofstream out("sample60.txt");//file connection with constructor
//     // writing in file 
//     out<<"I am writing a book on the daughter of respected aunty zahida khatoon in order to eradicate past memories";
//     //memory release
//     out.close();
//     return 0;
// }

/*
1. It the example of outstream where we write anything onto the file  

*/
// {
//    ifstream in;
//    in.open("sample60.txt");
//    string s1;
//    getline(in,s1);
//    cout<<s1;


// }
{
   string s1;
   string s2;
   cout<<"write your name "<<endl;
   getline(cin,s2);
   ofstream out;
   out.open("sample60.txt");
   out<<s2;
out.close();
ifstream in;
in.open("sample60.txt");
getline(in,s1);
cout<<s1;
if(s1==s2)
{
   cout<<endl<<"congratulations";
}



}