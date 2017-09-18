#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    long long int x,i,j;
    cin>>x;
    while(x)
    {
    v.push_back(x%10);
    x=x/10;
    }
reverse(v.begin(),v.end());
for(j=0;j<v.size();j++)
{
    if(j==0&&v[j]==9)
        v[j]=9;
    else{
        if(v[j]==5||v[j]==6||v[j]==7||v[j]==8||v[j]==9)
        { x=v[j]-0;
            v[j]=9-x;}
}
}
for(int k=0;k<v.size();k++)
    cout<<v[k];
return 0;
}
