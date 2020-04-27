#include<bits/stdc++.h>
using namespace std;

struct ELF
{
    string ab;
    int wight;
    int age;
    double hight;
};
bool cmp(struct ELF a,struct ELF b)
{
    if(a.wight<b.wight) return 0;
    if(a.wight>b.wight) return 1;

    if(a.age>b.age) return 0;
    if(a.age<b.age) return 1;

    if(a.hight>b.hight) return 0;
    if(a.hight<b.hight) return 1;

    if(a.ab<b.ab) return 1;
    if(a.ab>b.ab) return 0;
    return 1;
}
int main()
{
    int tst, in, out, i,casee=1;
    scanf("%d", &tst);
    while(tst--)
    {
        scanf("%d %d",&in,&out);
        struct ELF pak[in+1];
        for(i=0;i<in;i++)
        {
            cin>>pak[i].ab;
            scanf("%d %d %lf", &pak[i].wight,&pak[i].age,&pak[i].hight);
        }
        sort(pak,pak+in,cmp);

        printf("CENARIO {%d}\n", casee++);
        for(i=0;i<out;i++)
        {
            cout<<i+1<<" - "<<pak[i].ab<<endl;
        }
    }
    return 0;
}
