#include<stdio.h>
int main()
{
    int i,n,m,j;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        printf("%d %d\n", n,m);
        if(n==0&&m==0)
            break;
        int a[n],b[n];
        for(i=0; i<n; i++)
            scanf("%d", &a[i]);
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i]%m>a[j]%m)
                {
                    a[i]=a[i]+a[j];
                    a[j]=a[i]-a[j];
                    a[i]=a[i]-a[j];
                }
                else if(a[i]%m==a[j]%m)
                {
                    if(a[i]%2==1&&a[j]%2==1)
                    {
                        if(a[i]<a[j])
                        {
                            a[i]=a[i]+a[j];
                            a[j]=a[i]-a[j];
                            a[i]=a[i]-a[j];
                        }
                    }
                    else if(a[i]%2==0&&a[j]%2==0)
                    {
                        if(a[i]>a[j])
                        {
                            a[i]=a[i]+a[j];
                            a[j]=a[i]-a[j];
                            a[i]=a[i]-a[j];
                        }
                    }
                    else
                    {
                        if(a[i]%2<a[j]%2)
                        {
                            a[i]=a[i]+a[j];
                            a[j]=a[i]-a[j];
                            a[i]=a[i]-a[j];
                        }
                    }
                }
            }
        }
        for(i=0; i<n; i++)
            printf("%d\n", a[i]);
    }return 0;
}
