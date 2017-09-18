#include <iostream>
using namespace std;
int main()
{ int c=1,i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<c<<" ";
            c++;
        }
    cout<<" "<<endl;
    }
return 0;
}
