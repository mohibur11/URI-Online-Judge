#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,len[50],i,j,d,cnt=0;
    char a[50][52];
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        if(cnt>0)
            printf("\n");
        int big=0;
        for(i=0; i<n; i++)
        {
            scanf("%s", a[i]);
            len[i]=strlen(a[i]);
            if(big<len[i])
                big=len[i];
        }
        for(i=0; i<n; i++)
        {
            d=big-len[i];
            for(j=0; j<d; j++)
                printf(" ");
            printf("%s\n",a[i]);
        }
        cnt++;

    }
    return 0;
}
