#include <iostream>
using namespace std;
int main()
{ long long int n,a;
    cin>>n;
    while(n--)
    { a=0;
        cin>>a;
        if(a%2==0)
            cout<<a/2<<endl;
        else
            cout<<(a+1)*(-0.5);
    }
return 0;
}
