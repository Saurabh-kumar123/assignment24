#include<iostream>
using namespace std;
float sum(int a)
 {
     return a*a*3.14;
 }
 int sum(int a,int b)
 {
      return a*b;
 }
 float sum(float a,float b)
 {
      return 0.5*a*b;
}
int main()
{
     cout<<"area of circle..... "<<sum(4)<<endl;
     cout<<"area of rectngle.... "<<sum(4,12)<<endl;
     cout<<"area of rectngle.... "<<sum(5.0f,2.0f);
     return 0;
}

