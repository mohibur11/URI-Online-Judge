#include<stdio.h>
int main()
{
    int t,i,len1,len2;
    char r1[52],r2[52];
    scanf("%d", &t);

    while(t--)
    {
        scanf("%s %s",r1,r2);
        len1=strlen(r1);len2=strlen(r2);
        for(i=0;i<len1||i<len2;i++)
        {
            if(isalpha(r1[i])&&i<len1)
                printf("%c",r1[i]);
            if(isalpha(r2[i])&&i<len2)
                printf("%c",r2[i]);
        }printf("\n");
    }return 0;
}
