#include<bits/stdc++.h>
using namespace std;
int a[42];
int fib(int n)
{
    if (n==1)
        return 1;
    else if(n==2)
        return 2;
    else if(a[n-1]==0)
        return a[n-1]=fib(n-2)+fib(n-1);
    //printf("\ncome\n");
    return a[n-1];
}
int main()
{
    int n;
    while (scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        int f=fib(n);
        printf("%d\n",f);
    }
    return 0;
}
