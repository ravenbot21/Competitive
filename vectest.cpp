#include <iostream>
#include <vector>
using namespace std;

int main()
{
vector<int> v;
for(int i=0;i<5;i++)
{
    v.push_back(i*i);
}
for(int j=0;j<5;j++)
{
    cout<<v[j]<<endl;
}
return 0;
}
