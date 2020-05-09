#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i;
    while(scanf("%lld %lld",&n,&m)!=EOF)
    {
        long long int sum=0ll;
        if(n%2==0ll)
            n++;
        for(i=n;i<=m;i+=2ll)
            sum+=i;
        printf("%lld\n",sum);
    }
    return 0;
}
