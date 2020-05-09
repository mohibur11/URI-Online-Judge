#include<stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        long long int a=0,b=1,c=0;

        if(n==0||n==1)
            printf("%d\n", a);
        else if(n==2)
            printf("%d\n", b);
        else
        {
            for(i=3; i<=n; i++)
            {
                if(i%2==1)
                    c=a+b;
                else
                    c=a*b;
                a=b;
                b=c;
            }
            printf("%lld\n", c);
        }
    }
    return 0;
}
