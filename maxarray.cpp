#include <iostream>
using namespace std;
int main()
{
    long long int a[100000],n,i,j;;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i-1];
    }
for(j=1;j<=n;j++)
{
    if(a[0]<a[j])
        a[0]=a[j];
}
cout<<a[0];
return 0;
}
