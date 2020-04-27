#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,i,cnt=0;
    char a[1001],c[129],d[129];
    while(gets(a))
    {char b[129]={0};
        len=strlen(a);
        for(i=0;i<len;i++)
        {
            b[a[i]]++;
        }
        int j;
        for(i=0,j=0;i<128;i++)
        {
            if(b[i]!=0)
            {
                  c[j] = b[i]; d[j]=i;j++;
            }
        }
        for(i=0;i<j;i++)
        {
            for(int k=i+1;k<j;k++)
            {
                if(c[i]>=c[k])
                {
                    c[i]=c[i]+c[k];
                    c[k]=c[i]-c[k];
                    c[i]=c[i]-c[k];
                    d[i]=d[i]+d[k];
                    d[k]=d[i]-d[k];
                    d[i]=d[i]-d[k];
                }
            }
        }if(cnt==0)
        {for(i=0;i<j;i++)
        printf("%d %d\n",d[i],c[i] );}
        else
            {printf("\n");
        for(i=0;i<j;i++)
        printf("%d %d\n",d[i],c[i] );}cnt++;
    }
    return 0;
}
