#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    long long int m,c,add;
    int i,j,rem;
    char z_c[20];
    while(scanf("%lld %lld", &m,&c)!=EOF)
    {
        if(m==0ll&&c==0ll)
            break;
        add=m+c;i=0;
        while(add!=0)
        {
            rem=add%10;
            if(rem!=0)
            {z_c[i]=rem+48;i++;}
            add/=10;
        }

        for(j=i-1;j>=0;j--)
            printf("%c",z_c[j]);
        printf("\n");
    }
    return 0;
}
