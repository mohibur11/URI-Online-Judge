#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,len[50],i,j,k,d,cnt=0;
    char a[100][52],b[100][52];
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        if(cnt>0)
            printf("\n");
        int big=0;
        getchar();
        for(i=0; i<n; i++)
            gets(a[i]);
        for(i=0; i<n; i++)
        {
            int   len1=strlen(a[i]);
            for(j=0,k=0; j<len1; j++)
            {
                if(a[i][j]==' '&&isupper(a[i][j+1])&&k!=0)
                    b[i][k++]=a[i][j];
                else if(isupper(a[i][j]))
                    b[i][k++]=a[i][j];
            }
            b[i][k]='\0';
        }
        for(i=0; i<n; i++)
        {
            len[i]=strlen(b[i]);
            if(big<len[i])
                big=len[i];
        }
        for(i=0; i<n; i++)
        {
            d=big-len[i];
            //cout<<big;
            for(j=0; j<d; j++)
                printf(" ");
            printf("%s\n",b[i]);
        }
        cnt++;

    }
    return 0;
}
