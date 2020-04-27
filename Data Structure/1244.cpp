#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,len[60],j,z,k,tmp;
    char a[60][60],b[2600],c[60],x;
    scanf("%d",&t);
    getchar();
    for(z=0; z<t; z++)
    {
        gets(b);
        for(i=0,j=0,k=0;b[i]!='\0';i++)
        {
            if(b[i]==' ')
            {a[j++][k]='\0';k=0;}
            else
            {
                a[j][k++]=b[i];
            }
        }
        a[j][k]='\0';
        for(i=0;i<j+1;i++)
            len[i]=strlen(a[i]);
        int lm=j+1;
        for(i=0; i<lm; i++)
        {
            for(k=i+1; k<lm; k++)
            {
                if(len[i]<len[k])
                {
                    tmp=len[i];
                    len[i]=len[k];
                    len[k]=tmp;
                    strcpy(c,a[i]);
                    strcpy(a[i],a[k]);
                    strcpy(a[k],c);
                }
            }
        }
        for(i=0; i<lm; i++)
        {
            if(i==0)
                printf("%s", a[i]);
            else
                printf(" %s", a[i]);
        }
        printf("\n");
    }
    return 0;
}
