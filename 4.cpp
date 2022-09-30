#include<iostream>
using namespace std;
int fact(int n)
{
     int a=1;
     for(int i=1;i<=n;i++)
          a=a*i;
    return a;
}
 int comb(int n,int r)
 {
     return fact(n)/(fact(r)*fact(n-r));
 }
 void pascal()
 {
      int r;
      cout<<"enter a row ";
      cin>>r;
      for(int i=0;i<r;i++)
      {
          for(int j=0;j<=i;j++)
          {
           int k=0;
           if(j==0)
                    while(k++<=(r/2+1-i))
                    cout<<" ";
            cout<<" "<<comb(i,j);
          }
          cout<<endl;
      }
 }
int main()
{
     pascal();
   return 0;
}

