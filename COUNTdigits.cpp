#include <iostream>
using namespace std;
int main()
{
    long long int n,x,cot=0,k;
    cin>>n;
    cin>>k;
    while(n>0)
    {
        x=n%10;
        if(x==k)
            cot++;
        n=n/10;
    }
cout<<cot;
return 0;
}
