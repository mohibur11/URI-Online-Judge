#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[]="0123456789ABCDEFGHIJKLMNOPQRSTUV";
    while(1)
    {
        unsigned long long int n;
        int mod,i=0ll,r;
        char ans[100];
        scanf("%llu",&n);
        if(n==0ll)
        {
            printf("%d\n", 0);
            break;
        }
        while(n)
        {
            mod=n%32ll;
            ans[i++]=a[mod];
            n/=32ll;
        }
        for(r=i-1ll; r>=0ll; r--)
        {
            printf("%c", ans[r]);
        }
        printf("\n");
    }
    return 0;
}
