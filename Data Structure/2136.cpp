#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,big=0;
    char a[100],b[5],c[100];
    set <string> s,s1;
    set<string>::iterator it;
    while(1)
    {
        scanf("%s",a);
        if(strcmp(a,"FIM")==0)
            break;
        scanf("%s",b);
        if(b[0]=='Y')
        {
            len=strlen(a);
            if(big<len)
            {
                big=len;strcpy(c,a);
            }
            s.insert(a);
        }
        else if(b[0]=='N')
        {
            s1.insert(a);
        }
    }
    for(it=s.begin();it!=s.end();it++)cout<<(*it)<<endl;
    for(it=s1.begin();it!=s1.end();it++)cout<<(*it)<<endl;
    printf("\nAmigo do Habay:\n%s\n",c);
    return 0;
}
