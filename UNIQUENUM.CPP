#include <iostream>
using namespace std;
int main()
{ long long int n,a,sum;
    cin>>n;sum=0;
    while(n--)
    {
        cin>>a;
        sum=sum^a;
        }
cout<<sum;
return 0;
}
