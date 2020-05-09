#include<stdio.h>
int main()
{
    long long int a,srt;
    int c,i,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld", &a);
        c=0;
        if(a==1)
            printf("Not Prime\n");
        else
        {srt=sqrt(a);
        for(i=2; i<=srt; i++)
            if(a%i==0)
                c++;
        if(c==0)
            printf("Prime\n");
        else
            printf("Not Prime\n");}
    }
    return 0;
}
