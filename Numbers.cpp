#include <iostream>
using namespace std;
int main()
{ long long int n,a,b,p,x;
    cin>>n;
    while(n--)
    {
    cin>>a>>b;
    int p=1000000007;
    int x=1;
    a=a%p;
    while(b>0)
    {
        if(b&1)
            x=(x*a)%p;
        b=b>>1;
        a=(a*a)%p;
    }
        cout<<x%1000000007;
}
return 0;}
