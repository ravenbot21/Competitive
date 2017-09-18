#include <iostream>
#include <math.h>
using namespace std;
int main()
{ long long int n,i,coun=0;
    cin>>n;
    for(i=1;i<=sqrt(n);i++)
    {
     if(n%i==0)
            coun++;
    }
if(coun==1)
    cout<<"Prime"<<endl;
else
    cout<<"Not Prime"<<endl;
return 0;
}
