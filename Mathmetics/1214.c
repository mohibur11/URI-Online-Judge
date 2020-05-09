#include<stdio.h>
int main()
{
    int t,a[1000],sum,div,p,n,i;
    double urslt;
    scanf("%d",&t);
    while(t--)
    {sum=0;p=0;
        scanf("%d", &n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        div=sum/n;
        for(i=0;i<n;i++)
        {
            if(a[i]>div)
                p++;
        }
        urslt=(p*100.0)/n;
        printf("%.3lf%%\n", urslt);

    }return 0;
}
