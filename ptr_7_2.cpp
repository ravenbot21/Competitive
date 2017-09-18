#include <iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};
    int b=10;
    int *ptr=&b;
    cout<<ptr<<endl;
    cout<<a<<endl;
    ptr=a;
    cout<<ptr<<endl;
    return 0;
}

