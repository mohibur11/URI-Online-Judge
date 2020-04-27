/**Bismillahir Rahmanir Rahim**/
#include<stdio.h>
#include<string.h>
int main()
{
    int n,b,i,j,c=0;
    char a[1000],rev[1000];
    scanf("%d",&n);
    getchar();
    for(c=1;c<=n;c++)
    {gets(a);


        b=strlen(a);
        for(i=0;i<b;i++)
        {
            if((islower(a[i])||isupper(a[i])))
            a[i]+=3;
            rev[b-i-1]=a[i];
        }
        rev[b]='\0';
        for(i=b/2;i<b;i++)
        {
            rev[i]-=1;
        }
        printf("%s\n", rev);
    }return 0;
}
