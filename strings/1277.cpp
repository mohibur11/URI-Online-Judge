#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,tmp;
    string name[102],pre[102];
    cin>>t;
    while(t--)
    {
        scanf("%d", &n);
        for(i=0; i<n; i++)
            cin>>name[i];
        for(i=0; i<n; i++)
            cin>>pre[i];
        tmp=0;
        for(i=0; i<n; i++)
        {
            int P=0,M=0;
            int len=pre[i].size();
            for(j=0; j<len; j++)
            {
                if(pre[i][j]=='P')
                    P++;
                else if(pre[i][j]=='M')
                    M++;
            }
            len=len-M;
            double result=(P*100.00)/len;

            if(result<75.00&& tmp==0)
            {
                cout<<name[i];
                tmp=1;
            }
            else if(result<75.00)
                cout<<' '<<name[i];
        }
        printf("\n");
    }
    return 0;
}
