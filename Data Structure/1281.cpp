#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,k,j;
    cin>>t;
    while(t--)
    {
        string a[50],b;

        cin>>n;
        double p[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i]>>p[i];
            getchar();
        }
        cin>>m;
        double cost=0.0;
        for(int i=0;i<m;i++)
        {
            cin>>b>>k;
            for(j=0;j<n;j++)
            {
                if(a[j]==b)
                {
                    cost+=k*p[j];
                }
            }
        }
        printf("R$ %.2lf\n",cost);
    }
return 0;

}
