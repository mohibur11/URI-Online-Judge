#include<bits/stdc++.h>
using namespace std;
int main()
{
    char  a[1000][5],b[5];
    int n,i,j;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(strcmp(a[i],a[j])>0)
                {
                    strcpy(b,a[i]);
                    strcpy(a[i],a[j]);
                    strcpy(a[j],b);
                }
            }
        }
        for(i=0;i<n;i++)
            cout<<a[i]<<endl;
    }return 0;
}
