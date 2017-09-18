#include <iostream>
#include <algorithm>
#include <set>
#include <cstring>
using namespace std;
int main()
{ long long int n,coun=0; string s;
    cin>>n; set <char> a;
    while(n--)
    {
        cin>>s;
        a.clear();
        int x=s.length();
        for(int i=0;i<x;i++)
        {
            a.insert(s[i]);
        }
    if(a.find('+')!=a.end())
        {coun=coun+1;continue;}
    if(a.find('-')!=a.end())
    {
        coun=coun-1;continue;
    }
    //else
      //  {coun--; cout<<coun;}
    }
cout<<coun;
return 0;
}
