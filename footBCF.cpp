#include <iostream>
#include <cstring>
using namespace std;
int main()
{ int coun=0;
    string s;cin>>s;
    if(s.length()<7)
        cout<<"NO";
    else {
    for(int i=0;i<s.length();i++)
    {

        if(s[i]==s[i+1])
        {coun++;
        if(coun>=6){ cout<<"YES";break;}
        continue;}
        else
            coun=0;

    }

//if(coun>=7)
  //  cout<<"YES";
//else
if (coun<6){cout<<"NO";}

return 0;
}}
