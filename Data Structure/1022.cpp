#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,d1,n2,d2,t,a,b,d,r1,r2;
    char c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d / %d %c %d / %d",&n1,&d1,&c,&n2,&d2);
        if(c=='+')
        {
            a=((n1*d2)+(n2*d1));
            b=(d1*d2);
            d=__gcd(a,b);
            r1=a/d;r2=b/d;
            printf("%d/%d = %d/%d\n",a,b,r1,r2);
        }
        else if(c=='-')
        {
            a=((n1*d2)-(n2*d1));
            b=(d1*d2);
            d=__gcd(a,b);
            r1=a/d;r2=b/d;
            if(a<0)
            {r1*=-1;r2*=-1;}
            printf("%d/%d = %d/%d\n",a,b,r1,r2);
        }
        else if(c=='*')
        {
            a=((n1*n2));
            b=(d1*d2);
            d=__gcd(a,b);
            r1=a/d;r2=b/d;
            printf("%d/%d = %d/%d\n",a,b,r1,r2);
        }
        else if(c=='/')
        {
            a=(n1*d2);
            b=(n2*d1);
            d=__gcd(a,b);
            r1=a/d;r2=b/d;
            printf("%d/%d = %d/%d\n",a,b,r1,r2);
        }
    }
    return 0;
}
