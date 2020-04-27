#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len,len1,len2,t,i,j;
    char a[1002],b[1002];
    scanf("%d",&t);
    while(t--)
    {int cnt=0;
        scanf("%s %s", a,b);
        len2=strlen(b);
        len1=strlen(a);
        len=len1-len2;
        for(i=len,j=0;i<len1;i++,j++)
        {
            if(a[i]==b[j])
                cnt++;
        }
        if(cnt==len2)
            printf("encaixa\n");
        else
            printf("nao encaixa\n");
    }
return 0;
}

