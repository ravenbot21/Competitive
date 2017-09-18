#include <iostream>
#include <string>
using namespace std;
int i;
int main()
{
    string s;
    cin>>s;
int x=s.length();
for(i=0;i<=x-1;i++)
{
    if(s[i]=='0')
        s[i]='5';
}
cout<<s;
return 0;
}
