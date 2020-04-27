/**Bismillahir Rahmanir Rahim**/
#include<stdio.h>
#include<string.h>
int main()
{
    char S[70],test;
    int i,le,j;
    while(gets(S))
    {

        i=0;
        for(j=0;isalpha(S[j])==0;j++);
        S[j]=toupper(S[j]);
        test=S[j];
        le=strlen(S);
        for(i=j+1; i<le;i++)
        {
            if(isspace(S[i]))
                continue;
            else if(isupper(test))
                S[i]=tolower(S[i]);
            else if(islower(test))
                S[i]=toupper(S[i]);

            test=S[i];
        }
       puts(S);
    }
    return 0;
}
