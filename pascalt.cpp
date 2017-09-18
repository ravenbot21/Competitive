#include <iostream>
using namespace std;
int fact(int n)
{ int ans=1;
for(int i=1;i<=n;i++)
{
    ans=ans*i;
}
return ans;
}
int ncr(int k,int r)
{
    int sum1=fact(k)/(fact(k-r)*fact(r));
    return sum1;
}

int main()
{ int p;
    cin>>p;
for(int i=0;i<p;i++)
{
    for(int j=0;j<=i;j++)
    {
        cout<<ncr(i,j);
    }
    cout<<endl;
}
return 0;
}
