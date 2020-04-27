#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[10002],b[10002];
    int t,i,cnt,len;
    scanf("%d",&t);
    while(t--)
    {
        cnt=0;
        scanf("%s %s", a,b);
        len=strlen(a);
        for(i=0;i<len;i++)
        {
            while(a[i]!=b[i])
            {
                a[i]++;
                if(a[i]>'z')
                    a[i]-=26;
                cnt++;

            }
        }printf("%d\n", cnt);
    }return 0;
}
