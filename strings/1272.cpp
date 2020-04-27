#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[52];
    int t,i,len;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(a);
        len=strlen(a);
        for(i=0;i<len;i++)
        {
            if((islower(a[i])&&i==0)||(islower(a[i])&&isspace(a[i-1])))
                printf("%c",a[i]);
        }printf("\n");
    }return 0;

}
