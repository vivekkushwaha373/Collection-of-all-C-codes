#include<iostream>
using namespace std;
 int gta=0;// global variable
 void add()
 {
    cout<<gta;// 
 }
 int main()
 { 
    int gta=9;// local variable
    gta =10;   // local variable
    cout<<"the value of gta is "<<gta<<"\n";

    add();
 }
