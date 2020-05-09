#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,gcd,i;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if(((a*a)==(b*b)+(c*c))||((b*b)==(a*a)+(c*c))||((c*c)==(a*a)+(b*b)))
        {
            for(i=1;i<=a&&i<=b&&i<=c;i++)
                {if(a%i==0&&b%i==0&c%i==0)
                gcd=i;}
            if(gcd==1)
                printf("tripla pitagorica primitiva\n");
            else
                printf("tripla pitagorica\n");
        }
        else
            printf("tripla\n");
    }

    return 0;
}
