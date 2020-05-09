#include<stdio.h>
int main()
{
    long long int M,N,a,b;
    int i;
    while(scanf("%lld%lld", &M,&N)!=EOF)
    {
        a=1;
        b=1;
        for(i=1; i<=M; i++)
            a=a*i;
        for(i=1; i<=N; i++)
            b=b*i;
        printf("%lld\n", a+b);
    }
    return 0;
}
