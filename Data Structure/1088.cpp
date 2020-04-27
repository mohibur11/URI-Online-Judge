#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    while(scanf("%d", &n)!=EOF)
    {
        int cnt=0;
        int a[n];
        if(n == 0)
            break;
        for(i=0; i<n; i++)
            scanf("%d", &a[i]);
        for(i=0;i<n;i++)
        {
            for(j=1;j<n-i;j++)
            {
                if(a[j-1]>a[j])
                {
                    a[j-1] = a[j-1]+a[j];
                    a[j]= a[j-1]-a[j];
                    a[j-1] = a[j-1]-a[j];
                    cnt++;
                }
            }
        }
        //printf("%d\n", cnt);
        if(cnt%2 == 1)
        printf("Marcelo\n");
        else
        printf("Carlos\n");
    }
    return 0;
}
