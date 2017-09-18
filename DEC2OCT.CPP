#include <iostream>
using namespace std;
int main()
{ int n,j;
    cin>>n; int i=0;
    int a[100000];
    while(n>0)
    {
        a[i++]=n%8;
        n=n/8;
    }
for(j=i-1;j>=0;j--)
{
    cout<<a[j];
}
return 0;
}
