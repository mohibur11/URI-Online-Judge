#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=1,a,b,i,b1[202]={0};
    double n1, sum;
    while(scanf("%d",&n)!=EOF)
    {n1=0;sum=0;
        if(n==0)
            break;
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&a,&b);
            n1+=a;sum+=b;
            b1[b/a]+=a;

        }
        printf("Cidade# %d:\n",cnt++);
        int tmp=(sum*100.00)/n1;
        double mean = (double) tmp/100.00;
        int cnt1=0;
        for(i=0;i<202;i++)
        {
            if(b1[i]!=0&&cnt1==0)
                {printf("%d-%d",b1[i],i);cnt1=1;}
            else if(b1[i]!=0)
                printf(" %d-%d",b1[i],i);
        }
        printf("\nConsumo medio: %.2lf m3.\n",mean);
        memset(b1,0,sizeof(b1));
    }
    return 0;
}
