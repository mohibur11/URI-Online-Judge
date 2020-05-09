#include<bits/stdc++.h>
using namespace std;
bool visited[50];
vector <int> adj[50];
static int cnt ;
void initialize(void)
{
    cnt = 0;
    for(int i=0; i<50; i++)
    {
        visited[i]=false;
        adj[i].clear();
    }
}

void dfs(int n)
{
    visited[n] = true;
    for(int i=0; i<adj[n].size(); i++)
    {
        if(!visited[adj[n][i]])
        {
            cnt++;
            dfs(adj[n][i]);
        }
    }
}
int main()
{
    int tst;
    cin >> tst;
    while(tst--)
    {
        initialize();
        int node;
        cin >> node;
        int v, e;
        cin >> v >> e;
        for(int i=0; i<e; i++)
        {
            int x,y;
            scanf("%d %d", &x, &y);

            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        dfs(node);
        cout << cnt*2 << endl;
    }
    return 0;
}
