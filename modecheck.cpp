#include <iostream>
#include <math.h>
//#define p 1000000007;
using namespace std;
int main()
{ long long int n,a,b,x,y;
    cin>>n;
    int p=1000000007;
    while(n--)
    {
        cin>>a>>b;
        x=b%(p-1);
        cout<<x<<endl;
        y=pow(a,x);
       y=y%p;
       cout<<y<<endl;
       //(A^(B%(mod-1)))%mod
        cout<<y%p<<endl;
    }
return 0;
}
