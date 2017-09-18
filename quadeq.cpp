#include <iostream>
#include <math.h>
using namespace std;
float a,b,c,rt,x,rt1,rt2;
int main()
{
    cin>>a>>b>>c;
    rt=(float)((-b)/(float)(2*a));
    x=(float)((b*b)-(float)(4*a*c));
    if(x<0)
        cout<<"No Real Roots";
    else if(x==0)
        {
            cout<<"Real And Equal";
            cout<<rt<<" "<<rt;
        }
else
{
    rt1=(float)((-b+(float)sqrt(x))/(2*a));
rt2=(float)((-b-(float)sqrt(x))/(2*a));
cout<<"Real And Distinct"<<endl;
cout<<rt2<<" "<<rt1;
}
return 0;
}
