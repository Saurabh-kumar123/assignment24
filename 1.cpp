#include<iostream>
using namespace std;
void prime(int n)
{
     int i,c=0;
     for(int i=1;i<=n;i++)
          if(n%i==0)
          c++;
     if(c==2)
          cout<<"this number is prime";
     else
          cout<<"this is not prime";
}
int main()
{
     int n;
     cout<<"enter a number"<<endl;
     cin>>n;
     prime(n);
   return 0;
}

