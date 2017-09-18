#include <iostream>
#include <string>
using namespace std;
int main()
{ long long int x,i;
    string a;
    cin>>a;
x=a.length();
for(i=0;i<x;i++)
{
    if(i==0&&a[i]==9)
        a[i]='9';
    else{
        if(a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
        { x=a[i]-0;
            a[i]=(char)9-x;}
}}
cout<<a;
return 0;
}

