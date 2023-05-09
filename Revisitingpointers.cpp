 #include<iostream>
 using namespace std;
 int main()
 {
    int *p= new int[4];//dynamic memory allocation
    p[0]=1;
    p[1]=2;
    p[2]=9;
    p[3]=8;
     delete []p; //caution: memory of pointer will not release--->the varibale it is pointing will get release;
    for(int k=0;k<4;k++)
    {
        cout<<p[k]<<endl;
    }
   
    int *ptr=new int(9);// dynamic initialization
    
    cout<<ptr[0];
     return 0;
 }
 // in static memory allocation memory release automatically after 