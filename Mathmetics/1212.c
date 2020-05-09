#include<stdio.h>
#include<strings.h>
int main()
{
    unsigned int a,b;
    int c,d,e,m;
    while(scanf("%u%u", &a,&b)!=EOF)
    {c=0;m=0;
        if(a==0&&b==0)
            break;
        else
        {while(a!=0||b!=0)
        {
            d=a%10;
            e=b%10+m;
            a/=10;b/=10;
            if(d+e>9)
                {c++;m=1;}
                else
                    m=0;
        }
        if(c<=0)
            printf("No carry operation.\n");
        else if(c==1)
            printf("%d carry operation.\n",c);
        else
            printf("%d carry operations.\n",c);
        }
    }return 0;
}
