#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    { 
        id = inpId;
        salary = 34.0;
    }
    Employee() {cout<<"l"<<endl;}
};

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    // Programmer()
    // {
    //     cout<<"y"<<endl;
    // }
    // Programmer(int inpId)
    // {
    //     id = inpId;
    //     languageCode = 9;
    // }
    void getData(){
        cout<<id<<endl;
    }
};
int main()
{// { Programmer skillF;
// // Employee harry(1), rohan(2);
//     cout << skillF.languageCode<<endl;
//     cout << skillF.id<<endl;
    
//     // cout << harry.salary << endl;
//     // cout << rohan.salary << endl;
   
//     skillF.getData();
    return 0;
}
