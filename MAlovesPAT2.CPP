#include <iostream>
using namespace std;
int main()
{ int n,i,x;
    cin>>n;
    if(n==1)
        cout<<"1";
    else
    {
        cout<<"1"<<endl;
        for(i=1;i<=n-1;i++)
        {
            cout<<i;
            for(x=1;x<=i-1;x++)
            {
                cout<<"0";
            }
            cout<<i;
                cout<<" "<<endl;

        }
    }
return 0;
}
