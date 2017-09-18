#include <iostream>
using namespace std;
int main()
{ long long int n,x,z,sume,sumo;
    cin>>n;
    while(n--)
    { sume=0;sumo=0;
        cin>>x;
        while(x>0)
        {z=x%10;
        if(z%2==0)
            sume=sume+z;
        else
            sumo=sumo+z;
    x=x/10;
    }
if(sume%4==0||sumo%3==0)
    cout<<"Yes"<<endl;
else
    cout<<"No"<<endl;
}return 0;
}
