#include <iostream>
using namespace std;
int main()
{ int n,i,j,m,p;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;++j)
            cout<<" ";//cout<<" ";
      m=i;p=2*i-2;
      for(int k=1;k<=i;++k)
      {
          cout<<m; //cout<<" ";
          m++;
      }
        for( int l=1;l<=i-1;++l)
        {
            cout<<p;//<<" ";
            p--;
        }
    cout<<endl;}
return 0;
}
