#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    long long d;
    char a,b[100];
    while(scanf("%c %s", &a,b)!=EOF)
    {
        if(a=='0'&& b[0]=='0')
            break;
        char c[100]="0";
        for(i=0,j=0; i<strlen(b); i++)
        {
            if(b[i]!=a)
            {
                c[j]=b[i];
                j++;
            }
        }
        d=atoi(c);
        printf("%lld\n",d);
        getchar();
    }
}
