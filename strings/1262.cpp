#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[52];
    int n,i,len;
    while(scanf("%s %d",a,&n)!=EOF)
    {
        int cnt=0,tmp=0;
        len=strlen(a);
        for(i=0;i<len;i++)
        {
            if(a[i]=='W')
            {
                cnt++;
                if(tmp!=0)
                    cnt++;
                tmp=0;
            }
            else if(a[i]=='R')
            {
                tmp++;
            }
            if(tmp==n)
            {
                tmp=0;
                cnt++;
            }
        }
        if(a[len-1]=='R'&&tmp!=0)
            cnt++;
        printf("%d\n",cnt);
    }
    return 0;
}
