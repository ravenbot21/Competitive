#include <iostream>
using namespace std;
int main()
{
    int a[]={5,4,1,3,2};
    int n=5;
    for(int i=0;i<=n-1;i++)
    {
        int minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[minindex])
                minindex=j;
        }
    swap(a[minindex],a[i]);
    }
    for(int k=0;k<=n-1;k++)
    {
        cout<<a[k]<<endl;
    }
return 0;
}
