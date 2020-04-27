#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int len,i,j,cnt,b;
    while(cin>>a)
    {
        cnt=0;
        int cnt1=0,sze;
        len=a.size();
        for(i=0; i<len; i++)
        {
            b=i;
            for(j=i+1; j<len; j++)
            {
                if(a[b]==a[j])
                {
                    cnt++;   //cout<<len<<endl;
                    if(cnt1==0)
                    {
                        sze=(len-b)/2;
                        cnt1++;
                    }
                    //cout<<sze<<endl;
                    if(sze==cnt)
                    {
                        i=len;
                        break;
                    }
                    b++;

                }
                else
                {
                    cnt=0;
                    b=i;
                    cnt1=0;
                }
            }//printf("\n");
        }
        // printf("\n%d\n",cnt);
        for(i=0; i<len-cnt; i++)
        {
            printf("%c", a[i]);
        }
        printf("\n");
    }
    return 0;
}
