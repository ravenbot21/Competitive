#include <iostream>
#include <cstring>
using namespace std;
int main()
{ long long int n;
    cin>>n; string s;
    while(n--)
    {
        cin>>s; int count1=0,flag=0;



        for(int i=0;i<s.length();i++)
        {
            for(int j=i;j<s.length();j++)
            {
                if(s[i]==s[j])
                    count1++;
            }
        if(count1>=s.length()+1)
        {
        cout<<"yes"<<endl;
        break;
        }


        }
    if(count1<s.length()+1)
        cout<<"no"<<endl;
    }
return 0;
}
