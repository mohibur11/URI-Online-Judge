#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[26]={0},i,n,dd,ll,bb;
    char b[28],l[28],d[28];
    scanf("%d", &n);
    getchar();
    while(n--)
    {
        gets(b);gets(l);gets(d);
        bb=strlen(b);
        for(i=0;i<bb;i++)
            a[b[i]-65]++;
        ll=strlen(l);
        for(i=0;i<ll;i++)
            a[l[i]-65]--;
        dd=strlen(d);
        for(i=0;i<dd;i++)
            a[d[i]-65]--;
        int temp=0;
        for(i=0;i<26;i++)
        {
            if(a[i]<0)
            {
                printf("CHEATER\n");temp=1;break;
            }
        }

        if(temp!=1)
        {for(i=0;i<26;i++)
        {
            if(a[i]==1)
                printf("%c", i+65);
        }
        printf("\n");}
        memset(a, 0, sizeof(a));
        temp=0;
    }
    return 0;
}
