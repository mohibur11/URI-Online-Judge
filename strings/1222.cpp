#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,l,c,spce,len1,i;
    string a;
    while(scanf("%d%d%d",&w,&l,&c)!=EOF)
    {
        int len=0,line=0;
        for(i=1;i<=w;i++)
        {
            cin>>a;
            len1=a.size();
            len+=len1;
            if(len==c)
            {
                len=1;
                line++;
            }
            else if(len+1==c)
            {
                len=0;
                line++;
            }
            else if(len>c)
            {
                len=len1;
                line++;
            }
            else
            len++;

        }
        int page=line/l+1;
        cout<<page<<endl;
    }
    return 0;
}
