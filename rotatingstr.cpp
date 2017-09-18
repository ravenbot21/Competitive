#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int k;string s;
    cin>>s; cin>>k;
    cout<<s.substr(s.length()-k+1);
    cout<<s.substr(0,s.length()-k+1);
}
