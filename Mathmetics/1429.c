#include<stdio.h>
int fact(int);
int main()
{
    while(1)
    {
        int n,i,sum=0;
        scanf("%d", &n);
        if(n==0)
            break;
        else
        {
            for(i=1; n!=0; i++)
            {
                sum+=n%10*fact(i);
                n/=10;
            }
            printf("%d\n", sum);
        }
    }return 0;
}
int fact(int a)
{
    if(a==0||a==1)
        return 1;
    else
        return (a*fact(a-1));
}
