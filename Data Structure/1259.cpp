#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    if(a%2==1 &&b%2==0) return false;
    if(a%2==0 && b%2==1) return true;
    if(a%2==0 &&b%2==0)
    {
        if(a>b) return false;
        else return true;
    }
    if(a%2==1 && b%2==1)
    {
        if(a>b) return true;
        else return false;
    }
    return true;
}
int main()
{
    int n,i;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n,cmp);
    for(i=0;i<n;i++)
        printf("%d\n", a[i]);
    return 0;
}
