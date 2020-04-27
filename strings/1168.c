#include<stdio.h>
int main()
{
    char a[10000];
    int i,N,z,l;
    scanf("%d", &N);
    for(z=1;z<=N;z++)
    {
        l=0;
        scanf("%s", a);
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]=='1')
                l+=2;
            else if(a[i]=='2')
                l+=5;
            else if(a[i]=='3')
                l+=5;
            else if(a[i]=='4')
                l+=4;
            else if(a[i]=='5')
                l+=5;
            else if(a[i]=='6')
                l+=6;
            else if(a[i]=='7')
                l+=3;
            else if(a[i]=='8')
                l+=7;
            else if(a[i]=='9')
                l+=6;
            else if(a[i]=='0')
                l+=6;
        }printf("%d leds\n", l);
    }

}
