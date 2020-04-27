#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[5002],b[5003];
    int i,j;
    while(gets(a))
    {
        int alpha[26]= {0};
        int len,cnt=0,cnt1=0;
        len=strlen(a);
        for(i=0,j=0; i<len; i++)
        {
            if(i==0||(a[i-1]==' '))
            {
                b[j++]=tolower(a[i]);
            }
        }cnt1=1;
        for(i=1;i<j;i++)
        {
            if(b[i]==b[i-1])
                cnt1++;
            else
            {
                if(cnt1>=2)
                    cnt++;
                cnt1=1;
            }
            if(i==j-1&&b[i]==b[i-1])
            cnt++;

        }
        printf("%d\n", cnt);
    }
    return 0;
}
