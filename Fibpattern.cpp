#include <iostream>
using namespace std;

int main()
{ int a=1,n,i,j,b=1,c=0;
    cin>>n;
    if(n==1)
        cout<<"0";
    else
    {
        cout<<"0"<<endl;
        //c=a+b;//cout<<"a"<<endl;
        for(i=2;i<=n;i++)
        { //c=a+b;
          for(j=1;j<=i;j++)
          {cout<<a<<"    ";
         c=a+b;a=b;b=c;}cout<<" "<<endl;
        }

    }
return 0;
}
