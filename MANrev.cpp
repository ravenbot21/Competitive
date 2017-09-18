#include <iostream>
using namespace std;
int main()
{
    long long int n,s,x=0;
    cin>>n;
    while(n>0)
    {
        s=n%10;
        x=x*10+s;
        n=n/10;
    }
   cout<<x;
return 0;
}
