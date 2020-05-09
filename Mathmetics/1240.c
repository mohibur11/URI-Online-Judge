#include<stdio.h>
#include<string.h>
int main()
{
    int t,e,d,s,i,j,c;
    char a[100],b[100];
    scanf("%d", &t);
    for(s=1;s<=t;s++)
    {c=0;
        scanf("%s%s",a,b);
        e=strlen(a);
        d=strlen(b);
        for(i=e-1,j=d-1;j>=0;j--,i--)
        {
            if(a[i]==b[j])
                c++;
        }
        if(c==d)
            printf("encaixa\n");
        else printf("nao encaixa\n");
    }return 0;
}
