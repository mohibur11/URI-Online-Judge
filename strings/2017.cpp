#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100002],b[5][100002];
    int cnt[5]= {0},i,j,k,len;
    while(scanf("%s",a)!=EOF)
    {
        len=strlen(a);
        scanf("%d",&k);
        for(i=0; i<5; i++)
        {
            scanf("%s",b[i]);
            for(j=0; j<len; j++)
            {
                if(b[i][j]!=a[j])
                    cnt[i]++;
            }
        }
        int sml=cnt[0],loc=0;
        for(i=1; i<5; i++)
        {
            if(cnt[i]<sml)
            {
                sml=cnt[i];
                loc=i;
            }
        }
        if(sml>k)
            printf("%d\n",-1);
        else
        {
            printf("%d\n",loc+1);
            printf("%d\n",sml);}
    }
    return 0;
}
