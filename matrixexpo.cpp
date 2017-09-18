#include <iostream>
using namespace std;
int main()
{ long long int n,num;
    cin>>num;
    while(num--){cin>>n; long long int x00,x01,x10,x11;
    int a[2][2]={{1,1},{1,0}};
    int b[2][2]={{1,1},{1,0}};

    for(int i=1;i<n-1;i++)
    {
        x00=a[0][0]*b[0][0]+a[0][1]*b[1][0];
        x01=a[0][0]*b[0][1]+a[0][1]*b[1][1];
        x10=a[1][0]*b[0][0]+a[1][1]*b[1][0];
        x11=a[1][0]*b[0][1]+a[1][1]*b[1][1];
        //a={{x00,x01},{x10,x11}};
    a[0][0]=x00;a[0][1]=x01;a[1][0]=x10;a[1][1]=x11;
    }
cout<<x00<<endl;}
return 0;
}
