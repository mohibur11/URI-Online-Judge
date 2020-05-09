#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,t;
    while(scanf("%lld%lld", &a,&b)!=EOF)
    {
        if(a>b)
        printf("%lld\n", a-b);
        else
            printf("%lld\n", b-a);
    }
    return 0;
}
