#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[10];
    int t,i,b,c,rem,item;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&b,&c);
        for(i=b;i<=c;i++)
            printf("%d",i);

        for(i=c;i>=b;i--)
        {
            item=i;
            while(item)
            {
                rem=item%10;
                    printf("%d",rem);
                item/=10;
            }
        } printf("\n");

    }return 0;
}
