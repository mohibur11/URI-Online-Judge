#include<bits/stdc++.h>
#define sf1(a) scanf("%d",&a)
#define sf2(a,b) scanf("%d %d",&a, &b)
using namespace std;
vector <int> adj[27];
set <char> p;
set <char> ::iterator it;
bool visited[27];
void initialize(void)
{
    for(int i=0;i<=27;i++)
    {
        visited[i] = false;
        adj[i].clear();
    }
}
void dfs(int n)
{
    visited[n] = true;
    p.insert(n+97);
    for(int i=0;i<adj[n].size();i++)
    {
        if(!visited[adj[n][i]])
            dfs(adj[n][i]);
    }
}
int main()
{
    int tst, caseno = 1;
    cin >> tst;
    while(tst--)
    {
        printf("Case #%d:\n", caseno++);
        initialize();
        int v, e, cnt =0;
        sf2(v,e);
        char c1, c2;
        for(int i=0;i<e;i++)
        {
            cin >>c1 >>c2;
            //getchar();
            //printf("%c %c", c1, c2);
            adj[c1-97].push_back(c2-97);
            adj[c2-97].push_back(c1-97);
        }
        for(int i=0;i<v;i++)
        {
            if(!visited[i])
            {
                p.clear();
                dfs(i);
                for(it = p.begin();it!=p.end();it++ ) printf("%c,", *it);
                printf("\n");
                cnt++;
            }
        }

        printf("%d connected components\n\n", cnt);
    }
    return 0;
}
