#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    scanf("%d", &tst);
    while(tst--)
    {
        long long int n, m, a, b;
        scanf("%lld", &n);
        b = n*2;
        a = sqrt(b);
        while(1)
        {
            m = (a*(a+1))/2;
            if(m <= n) break;
            a--;
        }
        printf("%lld\n", a);
    }
}
