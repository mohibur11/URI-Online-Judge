#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[52],b[52];
    int len,i;
    while(gets(a))
    {
        int n[27]={0};
        len=strlen(a);
        for(i=0;i<len;i++)
        {
            if(islower(a[i]))
            n[a[i]-97]++;
        }
        int j=0;
        for(i=0;i<27;i++)
        {
            if((n[i]>0 && n[i-1]==0 && n[i+1]==0)||(i==0&&n[i]>0&&n[i+1]==0)||(i==25&&n[i]>0&&n[i-1]==0))
            {
                b[j++]=i+97;
                b[j++]=i+97;
            }
            else if( (i==0&&n[i]>0) || (n[i]>0 && (n[i-1]==0||n[i+1]==0)  ) )
            b[j++]=i+97;
        }
        for(i=0;i<j;i++)
        {
            if(i%2==0)
                printf("%c:",b[i]);
            else if(i==j-1)
                printf("%c",b[i]);
            else if(i%2==1)
                printf("%c, ",b[i]);
        }
        printf("\n");
    }
    return 0;
}
