#include <iostream>
#include <math.h>
using namespace std;
int main()
{ int coun=0,res=0,n,a,b;
    cin>>n;
    while(n--)
    { //coun=0,res=0;
        cin>>a>>b;
        for(int i=a;i<=b;i++)
        { //res=0;
            for(int j=1;j<=sqrt(i);j++)
            {
                if(i%j==0)
                    coun++;//cout<<"H";
            }
        if(coun==0)
            res++;
        coun=0;
        }
    cout<<res<<endl;
    res=0;
    }
return 0;
}
