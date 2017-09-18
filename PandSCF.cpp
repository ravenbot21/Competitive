#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{ string s1,s2; int sum1=0,sum2=0;
    cin>>s1;
    cin>>s2;
transform(s1.begin(),s1.end(),s1.begin(),::tolower);
transform(s2.begin(),s2.end(),s2.begin(),::tolower);
for(int i=0;i<s1.length();i++)
    {if((int)s1[i]==(int)s2[i])
        { continue;
        }

    else if((int)s1[i]!=(int)s2[i])
    {
        if((int)s1[i]>(int)s2[i])
            {cout<<"1";break;}
        else
            {cout<<"-1";break;}

    }
else
    cout<<"-1";{break;}}
return 0;
}

