#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,d;
    int i;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {c=a-1;
        d=(((b*b+b)/2)-((c*c+c)/2));
        printf("%lld\n", d);
    }
    return 0;
}

