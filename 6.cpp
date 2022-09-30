#include<iostream>
using namespace std;
void swapp(int &,int &);
int main()
{
     int a,b;
     cout<<"enter a two number"<<endl;
     cin>>a>>b;
     swapp(a,b);
     cout<<"after swaping... "<<a<<" "<<b;
     return 0;
}
void swapp(int &a,int &b)
{
     a=a+b;
     b=a-b;
     a=a-b;
}
