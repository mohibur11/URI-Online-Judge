#include<stdio.h>
#include<strings.h>

int main()
{
    int i,len,n,cnt1,cnt2,cnt3,t;
    char a[7],b1[4]="one",b2[4]="two",b3[6]="three";
    scanf("%d", &n);
    while(n--)
    {
        cnt1=cnt2=cnt3=0;
        scanf("%s",a);
        len=strlen(a);
        if((len==3)&&( (a[0]=='o'&&a[1]=='n') || (a[0]=='o'&&a[2]=='e') || (a[1]=='n'&&a[2]=='e') ))
        {
                    printf("%d\n", 1);
        }
        else if((len==3)&&((a[0]=='t'&&a[1]=='w') || (a[0]=='t'&&a[2]=='o') || (a[1]=='w'&&a[2]=='o')))
        {
                    printf("%d\n", 2);
        }
        else if(len==5)
        {
            for(i=0; i<len; i++)
            {
                if(a[i]==b3[i])
                    cnt3++;

            }
            if(cnt3>=4)
                printf("%d\n", 3);
        }

    }
    return 0;
}
