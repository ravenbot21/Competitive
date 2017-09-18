#include <iostream>
#include <math.h>
using namespace std;
int main()
{ int i=0,n,x,p,sum=0;
    cin>>n;
    while(n--)
    { sum=0;i=0;
        cin>>x;
        while(x>0)
        {
            p=x%10;
            sum=sum+(p*pow(2,i++));
            x=x/10;
        }
    cout<<sum<<endl;
    }
return 0;
}
