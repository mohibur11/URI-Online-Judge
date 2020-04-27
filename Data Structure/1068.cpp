#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
    string a;
    while(cin>>a)
    {
        sum=0;
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]=='(')
                sum++;
            else if(a[i]==')')
                sum--;
            if(sum<0)
                break;

        }
        if(sum==0)
            printf("correct\n");
        else printf("incorrect\n");
    }
    return 0;
}
