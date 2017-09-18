#include <iostream>
using namespace std;
int main()
{
    int a[1000]={0};int b[1000]={0};
    int m,n;
    cin>>m;
    for(int i=0;i<m;i++)
        {cin>>a[i];}
    cin>>n;
    for(int i=0;i<n;i++)
        {cin>>b[i];}
    int la=sizeof(a)/sizeof(a[0]); int lb=sizeof(b)/sizeof(b[0]);
    if(la>lb)
    {  int x=la-lb;
        for(int i=lb-1;i>=0;i--)
        {
           b[i+x]=b[i];
           b[i]=0;
        }

    }
else
{  int x=lb-la;
        for(int i=la-1;i>=0;i--)
        {
           a[i+x]=a[i];
           a[i]=0;
        }}
if(lb>la)
la=lb;

int p[1000]={0}; int carry=0;
for(int i=la-1;i>=0;i++)
{
    int sum=(a[i]+b[i])+carry;;
    p[i+1]=sum%10;
    carry=sum/10;

}
    if(p[0]!=0)
        {

            cout<<p[0];}
    for(int i=1;i<la+1;i++)
    {
        cout<<p[i];

    }



return 0;
}
