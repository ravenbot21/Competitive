#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{ long long int x; string n;
    getline(cin,n);//cin>>n;
    x=n.length();
    transform(n.begin(),n.end(),n.begin(),::tolower);
    //cout<<n;
    for(int i=0;i<x;i++)
    {

        if(n[i]=='a'||n[i]=='e'||n[i]=='i'||n[i]=='o'||n[i]=='u'||n[i]=='y')
        {continue;}
        else
           {

            cout<<"."<<n[i];}
            //    cout<<"true";//if(n[i]!='a'||n[i]!='e'||n[i]!='i'||n[i]!='o'||n[i]!='u')
        //{cout<<"."<<n[i];}
    }
return 0;
}

