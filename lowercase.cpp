#include<iostream>
#include<string.h>
using namespace std;
// int main()
// {
// char s1[10];
// cin.getline(s1,10);
// cout<<strlwr(s1);
// cout<<endl<<strupr(s1);
// cout<<char(56);
//     return 0;
// }
int main()
{   char s1[10]="APPLE";
    // cout<<"string : ";
    // cin>>s1;
    for(int i=0;s1[i]!='\0';i++)
    {
        if(s1[i]>='A'&& s1[i]<='Z')
        {
            // s1[i]=char(int(s1[i])-32);
            s1[i]=s1[i]+32;
        }
    }
   cout<<s1;
   cout<<endl;
   cout<<strrev(s1);
    return 0;
}