#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char s1[10];
  cin>>s1;
  int count=-1;
  for(int i=0;s1[i]!='\0';i++)
  {
    count++;
  }
  for(int i=(count);(i+1)!=0;i--)
  {
    cout<<s1[i];
  }
  
return 0;
}


