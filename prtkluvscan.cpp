#include <iostream>
using namespace std;
bool checkprime(int m)
{
    for(int l=2;l*l<=m;l++)
    {
        if(m%l==0)
            return false;
    }
return true;
}
int main()
{ long long int n,count1=0;
    cin>>n;
    while(n--)
    {
        int k;
        cin>>k;
        count1=0;
        for(int i=2;;i++)
        {
            if(checkprime(i))
                count1++;
            //cout<<count1<<endl;
            if(count1==k)
            {
                cout<<i<<endl; break;
            }
        }
    }
return 0;
}

