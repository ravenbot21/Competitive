//int Solution::maxSubArray(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{int n,k; int a[100];int sum_now=0,sum_max=0;
    cin>>n;
    for(k=1;k<=n;k++)
    {
        cin>>a[k-1];
    }

    for(int i=1;i<=n;i++)
{



        sum_now=sum_now+a[i-1];

        if(sum_now<0)
            sum_now=0;
        if(sum_max<sum_now)
            sum_max=sum_now;

    }
    //cout<<sum_max;
return sum_max;
}


