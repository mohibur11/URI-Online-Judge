#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long sum,n,m,i,a;

    while(scanf("%llu %llu",&n,&m)!=EOF)
    {
        sum=0ll;
        if(n==-1ll&&m==-1ll)
            break;
        for(i=n;i>=1ll;i--)
        {
            scanf("%llu",&a);
            sum+=a*m*i;
        }
        printf("%llu\n", sum);
    }

    return 0;
}
