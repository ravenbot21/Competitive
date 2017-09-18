#include <iostream>
using namespace std;
int main()
{ long long int y,n,x,sum;
sum=0;
    cin>>n;
    y=n;
    while(y!=0)
    { //sum=0;
        x=y%10;
        sum=sum+(x*x*x);
        y=y/10;
    }
if(n==sum)
    cout<<"true";
else
    cout<<"false";
return 0;
}

