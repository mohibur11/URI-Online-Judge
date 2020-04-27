#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[102],b[100][102],c[102];
    int i,j,s,k,len,len1=0;
    while(1)
    {
        int cnt[100]= {0};
        gets(a);
        if(a[0]=='0')
            break;
        len=strlen(a);
        for( s=0,i=0,j=0; i<len; i++)
        {
            if(a[i]!=' ')
            {
                cnt[j]++;
                b[j][s++]=a[i];
            }
            else
            {
                if(cnt[j]>=len1)
                {

                    len1=cnt[j];
                    strcpy(c,b[j]);//printf("%s",c);
                }
                j++;
                s=0;
            }
        }
        if(cnt[j]>=len1)
        {
            len1=cnt[j];
            strcpy(c,b[j]);
        }
        j++;
        for(i=0; i<j; i++)
        {
            if(i==0)printf("%d",cnt[i]);
            else printf("-%d", cnt[i]);
        }
        printf("\n");
    }
    printf("\nThe biggest word: %s\n", c);

    return 0;
}
