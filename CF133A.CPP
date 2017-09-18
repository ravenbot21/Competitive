#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
  set<char> v;  int count1=0,count2=0;string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        v.insert(s[i]);
    }
    if(v.find('H')!=v.end()||v.find('Q')!=v.end()||v.find(9)!=v.end())
    {count1++;}
    if(v.find('+')!=v.end())
     {

     count2++;}
    if(count1==0&&count2==0)
    {cout<<"NO";}
    else if(count1>0&&count2==0)
        cout<<"YES";
    else if(count1==0&&count2>0)
        cout<<"NO";
    else
        cout<<"YES";
    //else
      //  cout<<"NO";

    return 0;


}
