#include<bits/stdc++.h>
using namespace std;

long long  power(long long int x,long long  int y)
{
    if(y==0ll) return 1ll;
    return x*power(x, y-1ll);
}

int main()
{
    char t,hexa[100],c[100],a[17]="0123456789ABCDEF";
    long long int b,h,f1,f2,i,j;
    while(scanf("%lld%c",&b,&t)!=EOF)
    {
        if(b==0ll&&t=='\n')
        {printf("0x0\n");continue;}
        if(b<0ll)
            break;
        if(b==0ll)
        {   long long int sum=0;
            scanf("%s",c);
            long long int len=strlen(c);
            for(i=len-1ll,j=0;i>=0;i--,j++)
            {
                if(isupper(c[i]))
                    sum+=(c[i]-55)*power(16,j);
                else if(islower(c[i]))
                    sum+=(c[i]-87)*power(16,j);
                else if(isdigit(c[i]))
                    sum+=(c[i]-48)*power(16,j);
            }
            printf("%lld\n", sum);
        }
        else
        {
            long long int x=0ll;
            while(b)
            {
                f2=b%16ll;
            hexa[x++]=a[f2];
            b=b/16ll;

            }
            printf("0x");
            for(i=x-1ll;i>=0ll;i--)
                printf("%c",hexa[i]);
            printf("\n");
        }
    }
    return 0;
}
