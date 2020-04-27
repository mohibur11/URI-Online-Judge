#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int cnt=1;
    while(cin>>a)
    {
        if(a[0]=='0')
            break;
        cin>>b;
        int d;
        d=b.find(a);
        if(cnt==1)
        {if(d!=-1)
            printf("Instancia %d\nverdadeira\n",cnt++);
        else
            printf("Instancia %d\nfalsa\n",cnt++);}
        else
        {printf("\n");
            if(d!=-1)
            printf("Instancia %d\nverdadeira\n",cnt++);
            else
            printf("Instancia %d\nfalsa\n",cnt++);
        }
    }

    return 0;
}
