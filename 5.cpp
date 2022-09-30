#include<iostream>
using namespace std;
void fab(int);
int main()
{
     int n;
     cout<<"enter a number"<<endl;
     cin>>n;
     fab(n);
     return 0;
}
void fab(int n)
{
     int a=-1,b=1,c=0;
     while(n>c)
     {
          c=a+b;
          a=b;
          b=c;
          cout<<" "<<c;
          if(n==c)
          {
               cout<<endl<<"number is found "<<endl;
               break;
          }
     }
     if(n!=c)
          cout<<endl<<"number is not found";
}
