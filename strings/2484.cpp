#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[102];
    int i,len,j;
    while(scanf("%s",a)!=EOF)
    {
        len=strlen(a);

        for(i=0;i<len;i++)
        {
            for(j=0;j<i;j++)
                printf(" ");
            for(j=0;j<len-i;j++)
            {if(j==0)printf("%c", a[j]);
             else    printf(" %c", a[j]);

            }
            printf("\n");
        }printf("\n");
    }return 0;
}
