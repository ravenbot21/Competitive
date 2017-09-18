
#include <iostream>
#include <cstring>
using namespace std;
int main()
{ int n; string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        int x=s.length();
        if(x<=10)
            cout<<s;
        else{
        cout<<s[0]<<x-2<<s[x-1<<endl;
    }}
return 0;

}
