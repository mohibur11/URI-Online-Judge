#include<stdio.h>
int main()
{
    int a,i,j;
    while(scanf("%d", &a)!=EOF)
    {
        if(a==0)
            break;
        for(i=1,j=0;i<=a;i++)
        {
            j=i*i+j;
        }
        printf("%d\n",j);
    }return 0;
}
