#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[52];
    int i,len;
    while(gets(a))
    {
        int temp1=0,temp2=0;
        len=strlen(a);
        for(i=0;i<len;i++)
        {
            if(a[i]=='*')
            {
                if(temp1==0)
                {
                    printf("<b>");
                    temp1=1;
                }
                else if(temp1==1)
                {
                    printf("</b>");
                    temp1=0;
                }
            }
            else if(a[i]=='_')
            {
                if(temp2==0)
                {
                    printf("<i>");
                    temp2=1;
                }
                else if(temp2==1)
                {
                    printf("</i>");
                    temp2=0;
                }
            }
            else
            {
                printf("%c", a[i]);
            }

        }printf("\n");
    }
    return 0;
}
