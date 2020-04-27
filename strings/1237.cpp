#include<bits/stdc++.h>
using namespace std;
int main()
{
    char  a[52],b[52];
    while(gets(a))
    {
        gets(b);
        int len1=strlen(a);
        int len2=strlen(b);
        int i,j,temp,g,tmp_j=0,big=0,cnt=0;
        for(i=0,g=0; i<len1; i++,g++)
        {
            i=g;
            temp=i;
            cnt=0;
            for(j=0; j<len2;j++ )
            {
                if(a[i]==b[j]&&i<len1)
                {
                    if(cnt==0)
                        tmp_j=j;
                    cnt++;
                    i++;
                }
                else if(i<len1)
                {
                    i=temp;
                    if(cnt!=0) j=tmp_j;

                    cnt=0;
                }
                if(cnt>big)
                    big=cnt;
            }
        }
        printf("%d\n",big );
    }
    return 0;
}
