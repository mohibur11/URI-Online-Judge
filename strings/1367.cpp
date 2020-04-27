#include<bits/stdc++.h>
using namespace std;
int main()
{
    char id[300][3],ans[12],pid[300];
    int time,cnt,cnt1,i,j,k,t,R;
    while(1)
    {
        scanf("%d",&t);
        if(t==0)
            break;
        getchar();
        cnt=R=j=0;
        cnt1=-1;
        for(i=0; i<t; i++)
        {
            scanf("%s %d %s",&id[i],&time,ans);
            if(ans[0]=='c')
            {
                cnt+=time;
                R++;
                pid[j++]=id[i][0];
            }
        }
        for(i=0; i<j; i++)
        {
            cnt1=-1;
            for(k=0; k<t; k++)
            {
                if(pid[i]==id[k][0])
                    cnt1++;
            }
            cnt=cnt+cnt1*20;
        }
        printf("%d %d\n",R,cnt);
    }
    return 0;
}
