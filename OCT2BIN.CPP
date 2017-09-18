#include <iostream>
#include <math.h>
using namespace std;
int main()
{ int i=0; int a[100000];int n,q,x,sum=0,p,k,j=0;
    cin>>n;
    q=n;
    while(q>0)
    {
        x=q%10;
        sum=sum+(x*pow(8,i));
        q=q/10;
    i++;
    }
//cout<<sum;
while(sum>0)
{
    p=sum%2;
    sum=sum/2;
    a[j++]=p;


}
for(k=j-1;k>=0;k--)
{
    cout<<a[k];
}

return 0;
}
