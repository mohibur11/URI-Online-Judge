#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len,i,other,uc,lc,dig;
    char pass[102];
    while(gets(pass))
    {other=uc=lc=dig=0;
        len=strlen(pass);
        for(i=0;i<len;i++)
            {
                if(isupper(pass[i]))
                    uc++;
                else if(islower(pass[i]))
                    lc++;
                else if(isdigit(pass[i]))
                    dig++;
                else
                    other++;
            }
            if(len>=6&&len<=32&&uc>0&&lc>0&&dig>0&&other==0)
                printf("Senha valida.\n");
            else
                printf("Senha invalida.\n");
    }
    return 0;
}
