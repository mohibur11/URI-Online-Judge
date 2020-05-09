#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int  i,j;
    while(scanf("%d",&n)!=EOF)
    {
        int cnt=0;
        for(i=1;;)
        {
            cnt++;
            if(i%n==0ll)
                break;
            i=i%n;
            i=i*10+1;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
