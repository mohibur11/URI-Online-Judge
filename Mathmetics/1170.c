#include<stdio.h>
int main()
{
    int n,t=0;
    double a;
    scanf("%d",&n);
    while(n--)
    {
        t=0;
        scanf("%lf",&a);
        while(a>1)
        {
            a/=2.00;
            t++;
        }
        printf("%d dias\n",t);
    }
    return 0;
}
