#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{ string s;int n;
    cin>>n;
    cin>>s;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
            s[i]='m';
    }
s.erase(remove(s.begin(),s.end(),'m'),s.end());
sort(s.begin(),s.end());
int y=s.length();
cout<<n-y;
return 0;
}
