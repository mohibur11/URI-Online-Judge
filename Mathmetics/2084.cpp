#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a[11],t,big=0,loc,cnt=0,total=0;
    double per[11];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
        total+=a[i];
        if(big<a[i])
            {big=a[i];loc=i;}
    }
    for(i=0;i<t;i++)
    {
        per[i]=(a[i]*100.0)/(double)total;
    }
    for(i=0;i<t;i++)
    {
        if(((per[loc]-per[i])>=10.0)&&(i!=loc))
            cnt++;
    }
    if(per[loc]>=45.0)
        printf("1\n");
    else if((per[loc]>=40.0)&&(cnt==t-1))
        printf("1\n");
    else
        printf("2\n");
    return 0;
}
