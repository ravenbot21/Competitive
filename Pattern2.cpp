#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;//>>" ">>endl;
    cout<<"1"<<endl;
    for(i=2;i<=n;i++)
    {
        cout<<i;
        for(j=1;j<=i-2;j++)
           {cout<<"0";}
    cout<<i<<" "<<endl;

    }
return 0;


}
