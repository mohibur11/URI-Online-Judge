#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n;
    long long int cnt,a[40][40];
    while(scanf("%d", &n)!=EOF)
    {
        for(i=0; i<=n; i++)
        {
            cnt=0ll;
            for(j=0; j<i*2+1; j++)
            {
                if(i<=1||j==0||j==i*2)
                {
                    a[i][j]=1;
                }
                else if(j==1)
                {
                    a[i][j]=a[i-1][j-1]+a[i-1][j];
                }
                else if(j==i*2-1)
                {
                    a[i][j]=a[i-1][j-1]+a[i-1][j-2];
                }
                else
                {
                    a[i][j]=a[i-1][j]+a[i-1][j-1]+a[i-1][j-2];
                }
                cnt+=a[n][j];
            }
        }
        printf("%lld\n", cnt);
    }
    return 0;
}
