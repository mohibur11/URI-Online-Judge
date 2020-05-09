#include<stdio.h>
#include<strings.h>
long long int oracle(int ,int);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,cnt,i;
        long long int result;
        char a[25];
        scanf("%d%s",&n,a);
        cnt=strlen(a);
        result=oracle(n,cnt);
        printf("%lld\n", result);
    }return 0;
}

long long int oracle(int n,int cnt)
{long long int sum=1;
int i;
    for(i=n;i>0;i-=cnt)
        sum*=i;
    return sum;
}
