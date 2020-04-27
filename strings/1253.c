#include<stdio.h>
int main()
{
    int t,n,i,index;
    char str[52];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%s %d",str,&n);
        for(i=0; str[i]; i++)
        {
            index=str[i]-n;
            if(index<65)
                printf("%c",index+26);
            else
                printf("%c", index);
        }
        printf("\n");
    }
    return 0;
}
