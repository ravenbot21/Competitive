#include <iostream>
using namespace std;
int main()
{ long long int n,c,d,l,x,min1,max1;
    cin>>n;
    while(n--)
    { min1=0;max1=0;
        cin>>c>>d>>l;
        if(c>d)
        {
            x=c-(d*2);
            min1=(d+x)*4;
            max1=(c+d)*4;
            if(l>=min1&&l<=max1&&l%4==0)
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
         else if(c<=d)
         {
           min1=d*4;
           max1=(c+d)*4;
           if(l>=min1&&l<=max1&&l%4==0)
                    cout<<"yes"<<endl;
           else
            cout<<"no"<<endl;

         }




}
return 0;
}
