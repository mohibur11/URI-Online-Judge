#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,len;
    char a;
    char b[102];
    while(1)
    {
        cin>>a>>b;
        if(a=='0'&& b[0]=='0')
            break;
        len=strlen(b);//cout<<a<<b;
        for(i=0; i<len; i++)
        {
            if(a==b[i])
                b[i]='*';
        }
        int cnt=0;
        for(i=0; i<len; i++)
        {
            if(b[i]=='*'||b[i]=='0')
                cnt++;
        }int loc=0;
        if(cnt==len)
            printf("0\n");
        else
        {for(i=0; i<len; i++)
        {
            if(isdigit(b[i])&&b[i]!='0')
            {
                printf("%c", b[i]);
                loc=1;
            }
            if(b[i]=='0'&&loc==1)
                printf("%c",b[i]);


        }printf("\n");}


    }
    return 0;
}
