#include<bits/stdc++.h>
using namespace std;
struct detail
{
    char  name[100] , clr[20];
    char sizee;
};
typedef struct detail d;
bool cmp(detail a,detail b)
{
    if(strcmp(a.clr,b.clr)>0) return false;
    if(strcmp(a.clr,b.clr)<0) return true;

    if(a.sizee<b.sizee) return false;
    if(a.sizee>b.sizee) return true;

    if(strcmp(a.name,b.name)>0) return false;
    if(strcmp(a.name,b.name)<0) return true;
    return true;
}
int main()
{
    int n,i,cnt=0;
    while(scanf("%d",&n)!=EOF)
    {
        getchar();
        if(n==0)
            break;
        if(cnt!=0)
            printf("\n");
        struct detail dtl[n];
        for(i=0;i<n;i++)
        {
            gets(dtl[i].name);

            scanf("%s %c" , dtl[i].clr,&dtl[i].sizee);
            getchar();
        }
        sort(dtl,dtl+n,cmp);
        for(i=0;i<n;i++)
            printf("%s %c %s\n", dtl[i].clr,dtl[i].sizee,dtl[i].name);
            cnt=1;

    }
    return 0;
}
