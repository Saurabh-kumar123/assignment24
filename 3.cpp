#include<iostream>
using namespace std;
int prime(int n,int p)
{
     int a=1;
     while(p--)
     {
          a=a*n;
     }
    return a;
}
int main()
{
     int n,p;
     cout<<"enter a number"<<endl;
     cin>>n;
     cout<<"enter a power"<<endl;
     cin>>p;
     cout<<"number "<<prime(n,p);
   return 0;
}
