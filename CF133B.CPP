#include <iostream>
#include <math.h>
using namespace std;

int main()
{ string a; string g;
    cin>>a;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='>')
            g=g+"1000";
        else if(a[i]=='<')
            g=g+"1001";
        else if(a[i]=='+')
            g=g+"1010";
        else if(a[i]=='-')
            g=g+"1011";
        else if(a[i]=='.')
            g=g+"1100";
        else if(a[i]==',')
            g=g+"1101";
        else if(a[i]=='[')
            g=g+"1110";
        else if(a[i]==']')
            g=g+"1111";
    }
long long int x=g.length();
//cout<<g;
long long sum=0,p;
for(int i=0;i<g.length();i++)
{
    if(g[i]=='1')
        { p=((long long)pow(2,x-i-1))%1000003;
            sum=sum+p;}
}
cout<<sum%1000003;
return 0;
}
