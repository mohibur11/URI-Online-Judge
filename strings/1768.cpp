#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,s;
    while(scanf("%d",&n)!=EOF)
    {
        s=(n+1)/2;
        for(i=1;i<=s;i++)
        {//if(i*2-1<=n)
            for(j=1;j<=s-i;j++)
                printf(" ");

            for(j=1;j<=i*2-1;j++)
                printf("*");
            printf("\n");
        }
        for(i=1;i<=2;i++)
        {
            for(j=1;j<=s-i;j++)
                printf(" ");
            for(j=1;j<=i*2-1;j++)
                printf("*");
            printf("\n");
        }printf("\n");
    }


    return 0;
}

