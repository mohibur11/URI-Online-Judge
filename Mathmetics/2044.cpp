#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,i;
    while(cin>>n)
    {int cnt=0,sum=0;
        if(n==-1)
            break;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            sum+=a;
            if(sum%100==0)
                cnt++;
        }cout<<cnt<<endl;
    }
    return 0;
}
