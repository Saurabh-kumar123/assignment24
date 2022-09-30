#include<iostream>
using namespace std;
int maxx(int a,int b)
{
  return a+b;
}
float maxx(float a,float b)
{
     return a+b;
}
float maxx(int a,float b)
{
     return a+b;
}
float maxx(float a,int b)
{
     return a+b;
}
int main()
{
     cout<<"sum of values.. "<<maxx(10,20)<<endl;
     cout<<"sum of values.. "<<maxx(3.4f,2.3f)<<endl;
     cout<<"sum of values.. "<<maxx(10,2.2f)<<endl;
    cout<<"sum of values.. "<<maxx(1.5f,20);
    return 0;
}

