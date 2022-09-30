#include<iostream>
using namespace std;
int maxx(int a,int b)
{
  return a>b?a:b;
}
float maxx(float a,float b)
{
     return a>b?a:b;
}
int main()
{
     float a,b;
     cout<<"enter a two number"<<endl;
     cin>>a>>b;
     cout<<"maximum number is.. "<<maxx(a,b);
    return 0;
}
