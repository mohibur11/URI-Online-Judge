#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,i;
    cin>>t;
    while(t--)
    {
        set <string> str;
        char x[22];
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>x;
            str.insert(x);
        }
        if(str.size()==1)
            printf("%s\n",x);
        else
            printf("ingles\n");
    }
    return 0;

}
