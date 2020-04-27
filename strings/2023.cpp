#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000][81],d[81],b[1000][81];
    int i=0,n,j,k,len;
    while(gets(a[i]))
    {
        strcpy(b[i],a[i]);
        len=strlen(a[i]);
        for(n=0;n<len;n++)
            a[i][n]=tolower(a[i][n]);
        if(a[i][0]=='0')
            break;i++;
    }
    for(j=0;j<i;j++)
    {
        for(k=j+1;k<i;k++)
        {
            if(strcmp(a[j],a[k])>0)
            {
                strcpy(d,a[j]);
                strcpy(a[j],a[k]);
                strcpy(a[k],d);

                strcpy(d,b[j]);
                strcpy(b[j],b[k]);
                strcpy(b[k],d);
            }

        }
    }
    printf("%s\n", b[i-1]);
    return 0;
}
