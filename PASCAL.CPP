#include <iostream>
using namespace std;

int main()
{
int bin,p,q,r,x;

bin=1;
q=0;

cin>>r;

//cout<<"\nPascal's Triangle:\n";

while(q<r)
{
for(p=40-3*q;p>0;--p)
cout<<" ";
for(x=0;x<=q;++x)
{
if((x==0)||(q==0))
bin=1;
else
bin=(bin*(q-x+1))/x;
cout<<"      ";
cout<<bin;
}

cout<<"\n\n\n";
++q;
}
return 0;
}
