#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    string s;
    cin>>s;
    s.erase(remove(s.begin(),s.end(),'+'),s.end());
    //cout<<s<<endl;N
    sort(s.begin(),s.end());
    //cout<<s<<endl;
    for(int i=0;i<s.length();i++)
    {
       cout<<s[i];
       if(i!=s.length()-1)
        cout<<"+";
       else
        break;

           }
    return 0;
}
