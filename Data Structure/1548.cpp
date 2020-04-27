#include<bits/stdc++.h>
using namespace std;
int way(int x,int y)
{
    return x>y;
}
int main()
{
    int t,n,i,cnt=0,a[1000],b[1000];
    cin>>t;
    while(t--)
    {cnt=0;
        cin>>n;
        for(i=0;i<n;i++)
            {scanf("%d",&a[i]);b[i]=a[i];}
        sort(b,b+n,way);
        for(i=0;i<n;i++)
        {
            if(a[i]==b[i])
                cnt++;
        }
        cout<<cnt<<endl;

    }return 0;
}
