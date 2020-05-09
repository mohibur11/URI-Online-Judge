#include<stdio.h>
int main()
{
    int a,t,s,i;
    scanf("%d",&t);
    for(s=1; s<=t; s++)
    {
        scanf("%d",&a);
        int b[a];
        for(i=0; i<a; i++)
            scanf("%d",&b[i]);
        printf("Case %d: %d\n",s, b[(a/2)]);
    }return 0;
}
