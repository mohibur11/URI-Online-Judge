#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a;
        int sum=0,cnt=0,cnt1=0,cnt2=0;
        for(int i=0; i<a.size(); i++)
        {

            if(a[i]=='<')
            {
                sum++;
                cnt1++;
            }
            else if(a[i]=='>')
            {
                sum--;
                cnt2++;
            }
            if(sum<0)
            {
                sum=0;
                cnt+=cnt2-1;
                cnt2=0;
                continue;
            }
        }
        if(cnt1+1==cnt2)
            cnt+=cnt1;
        else if(cnt1>=cnt2)
            cnt+=cnt2;
        printf("%d\n",cnt);
    }
    return 0;
}
