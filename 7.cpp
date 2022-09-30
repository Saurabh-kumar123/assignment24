#include<iostream>
using namespace std;
int sum(int a,int b,int c=0)
 {
     return a+b+c;
 }
int main()
{
     cout<<"sum of two digit..... "<<sum(5,4)<<endl;
     cout<<"sum of three digit.... "<<sum(45,12,23);
     return 0;
}

