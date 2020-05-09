#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    scanf("%d" , &t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        printf("%d\n", __gcd(n,m));
    }
    return 0;
}
