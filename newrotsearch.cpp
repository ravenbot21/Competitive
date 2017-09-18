#include <iostream>
using namespace std;
int research(int a[],int s,int e,int key)
{
    if(s>e)
        return -1;
    int mid=(s+e)/2;
    if(a[mid]==key)
        return mid;
    if(a[mid]<=a[e])
    {
        if(a[mid]<=key<=a[e])
            return research(a,mid+1,e,key);

    }
if(key>=a[s]&&key<=a[mid-1])
    return research(a,s,mid-1,key);
else
    return research(a,s,mid-1,key);
}

int main()
{
    int a[]={6,7,1,2,3,4,5};
    cout<<research(a,0,6,1);

return 0;}





