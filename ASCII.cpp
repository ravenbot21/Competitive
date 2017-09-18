#include <iostream>
#include <string>
using namespace std;
int main()
{  int x;
    char my;
    cin>>my;
    x=int(my);
if(x<=90&&x>=65)
    cout<<"UPPERCASE"<<endl;
else if(x>=97&&x<=122)
    cout<<"lowercase"<<endl;
else
    cout<<"Invalid"<<endl;
return 0;
}
