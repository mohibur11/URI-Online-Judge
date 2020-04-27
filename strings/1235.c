#include<stdio.h>
int main()
{
    int t,i,len;
    char r[102];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(r);
        len=strlen(r);
        for(i=len/2-1;i>=0;i--)
            printf("%c", r[i]);
        for(i=len-1;i>=len/2;i--)
            printf("%c", r[i]);
            printf("\n");
    }return 0;
}
