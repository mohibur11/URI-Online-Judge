#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,i,j,cnt=1;
    while(scanf("%d %d", &n,&q )!=EOF)
    {
        if(n==0&&q==0)
            break;
        int x[n],y[q];
        for(i=0;i<n;i++)
            scanf("%d",&x[i]);
        for(i=0;i<q;i++)
            scanf("%d",&y[i]);
        sort(x,x+n);
        int loc;
        printf("CASE# %d:\n", cnt);
        for(i=0;i<q;i++)
        {loc=0;
            for(j=0;j<n;j++)
            {
                if(x[j]==y[i])
                    {loc=j+1;break;}
            }
            if(loc==0)
                printf("%d not found\n",y[i]);
            else
                printf("%d found at %d\n",y[i],loc);
        }cnt++;
    }return 0;
}
