#include<iostream>
using namespace std;
enum foodrecipe
{
    masala,daal,chawal,gehu
};
int main()
{
    foodrecipe recipe;
    
    recipe=masala;
   // masala=1   ->this conversion is invalid


    cout<<recipe<<endl;
//    cout<<masala<<endl<<daal<<endl<<chawal<<endl<<gehu;   
    return 0;
}