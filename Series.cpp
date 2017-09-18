#include <iostream>
using namespace std;
int main()
{ long long int a,count=1,b,i=1,x;
    cin>>a;
    cin>>b;
    while(1)
    {

        x=(3*i)+2;
        if(x%b!=0)
        {
            cout<<x<<endl;
            i++;count++;
        }
    else
        i++;
if(count==a+1)
        break;
    }

return 0;
}
