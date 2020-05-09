#include<bits/stdc++.h>
using namespace std;
int cnt=0;
long long int  fib(long long n)
{cnt++;
    if(n==0ll)
        return 0;
    else if(n==1ll)
        return 1;
    else
        return (fib(n-1)+fib(n-2));
}
int main()
{
    int t;
    long long res,n;
    cin>>t;
    while(t--)
    {cnt=0;
        scanf("%lld",&n);
        res=fib(n);
        printf("fib(%lld) = %d calls = %lld\n",n, cnt-1,res);
    }return 0;
}
