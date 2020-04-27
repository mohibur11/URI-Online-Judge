#include<bits/stdc++.h>
using namespace std;
int m;
bool tst(int A,int B)
{
    if( A % m < B % m ) return 1;
    if( A % m > B % m ) return 0;

    if (A%2 && B%2==0) return 1;
    if (A%2==0 && B%2) return 0;

    if (A%2 && B%2 && A>B) return 1;
    if (A%2 && B%2 && A<B) return 0;

    if (A%2==0 && B%2==0 && A<B) return 1;
    if (A%2==0 && B%2==0 && A>B) return 0;
    return 0;
}
int main()
{
    int n, i;

    while(scanf("%d %d", &n, &m)!= EOF)
    {
        if(n==0&&m==0)
            break;
        int a[n+2];
        for(i=0; i<n; i++)
            scanf("%d", &a[i]);
        sort(a,a + n,tst);
        printf("%d %d\n",n,m);
        for(i=0; i<n; i++)
            printf("%d\n",a[i]);
    }
    printf("0 0\n");

    return 0;
}
