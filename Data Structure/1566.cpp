#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,b,cnt=0;
    long long n;
    scanf("%d",&t);
    while(t--)
    {int a[232]={0};cnt=0;
        cin>>n;
        for(i=0ll; i<n; i++)
            {scanf("%d",&b);
            a[b-1]++;
            }

        for(i=19;i<230;i++)
        {
            if(a[i]!=0)
            {

                while(a[i]--)
                {   if(cnt==0)
                    {printf("%d",i+1);cnt++;}
                    else
                    printf(" %d",i+1);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
