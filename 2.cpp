#include<iostream>
using namespace std;
int prime(int n)
{
     int a,b=0;
    while(n)
    {
         a=n%10;
         if(a>b)
          b=a;
         n=n/10;
    }
    return b;
}
int main()
{
     int n;
     cout<<"enter a number"<<endl;
     cin>>n;
     cout<<"higest digit is "<<prime(n);
   return 0;
}
