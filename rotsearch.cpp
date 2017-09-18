#include <iostream>
using namespace std;
int research(int a[],int s,int e,int key)
{
    if(s>e)
        return -1;
    int mid=(s+e)/2; if(a[mid]==key){return mid;}
    //if left is sorted
    if(a[s]<=a[mid])
    {
        if(key>=a[s]&&key<=a[mid])
        return research(a,s,mid-1,key);


return research(a,mid+1,e,key);}


if(key>=a[mid]&&key<=a[e]){
return research(a,mid+1,e,key);}
else
    return research(a,s,mid,key);

}


int main()
{
int a[]={6,7,1,2,3,4,5};
cout<<research(a,0,6,1);
}
