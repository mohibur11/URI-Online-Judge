#include<stdio.h>
#include<string.h>
int main()
{
    char up[56]="ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char down[56]="abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz",rot[52];
    int i,len;
    while(gets(rot))

    {for(i=0;rot[i];i++)
    {
        if(isupper(rot[i]))
        {
            printf("%c",up[rot[i]-65+13]);
        }
        else if(islower(rot[i]))
        {
            printf("%c",down[rot[i]-97+13]);
        }
        else
            printf("%c",rot[i]);

    }
    printf("\n");}
    return 0;
}
