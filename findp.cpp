#include <iostream>
using namespace std;

bool findp(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
 int a[1000000];
void storep()
{

    a[0]=2;int k=1;
    for(int j=3;j<=1000000;j=j+2)
    {
        if(findp(j))
        {a[k]=j;k++;}
    }
}
int main()
{  int n,m;
    cin>>n; storep();
    //cout<<a[10];
    while(n--)
    {
        cin>>m;
        cout<<a[m-1]<<endl;
    }
return 0;

}
