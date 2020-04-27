#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,len;
    cin>>t;
    char a[100][52];
    while(t--)
    {int sum=0;
        cin>>n;
        for(i=0;i<n;i++)
            scanf("%s", a[i]);
        for(i=0;i<n;i++)
        {
            len=strlen(a[i]);
            for(j=0;j<len;j++)
            {
                sum+=i+j+a[i][j]-65;
            }
        }cout<<sum<<endl;
    }return 0;
}
