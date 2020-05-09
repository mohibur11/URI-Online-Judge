#include<bits/stdc++.h>
using namespace std;
bool visited[22];
vector <int> adj[22];
void initialize(void)
{
    for(int i=0; i<21; i++)
    {
        visited[i] = false;
        adj[i].clear();
    }
}
static int tmp = 0;
void dfs(int node, int space)
{
    space+=2;
    visited[node] = true;
    for(int i=0; i<adj[node].size(); i++)
    {
        tmp =0;
        for(int j=0; j<space; j++) printf(" ");
        printf("%d-%d",node, adj[node][i]);

        if(!visited[adj[node][i]])
        {
            printf(" pathR(G,%d)\n", adj[node][i]);
            dfs(adj[node][i],space);
        }
        else
            printf("\n");
    }
}
int main()
{
    int tst, v, e, caseno=1;
    cin >> tst;
    while(tst--)
    {
        initialize();
        scanf("%d %d", &v, &e);
        int x, y;
        for(int i=0; i<e; i++)
        {
            scanf("%d %d", &x, &y);
            adj[x].push_back(y);
        }
        for(int i=0; i<v; i++)
            sort(adj[i].begin(), adj[i].end());
        int sp = 0;
        printf("Caso %d:\n", caseno++);
        for(int i=0; i<v; i++)
        {
            if(!visited[i])
            {
                dfs(i,sp);
                if(tmp ==0)
                {
                    printf("\n");
                    tmp =1;
                }
            }
        }
        if(tmp = 0)
            printf("\n");
    }
    return 0;
}
