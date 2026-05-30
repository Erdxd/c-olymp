#include <iostream>
#include <vector>
using namespace std;
void dfs(int v, vector<vector<int>> &g, vector<int> &vis, int &count)
{
    vis[v] = 1;
    count++;
    for (int i : g[v])
    {
        if (!vis[i])
        {
            dfs(v, g, vis, count);
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n + 1);
    if (n != m)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> v >> u;
        g[v].push_back(u);
        g[u].push_back(v);
    }

    int count = 0;
    vector<int> vis(n + 1);
    dfs(1, g, vis, count);
    if (count != n)
    {
        cout << "NO";
    }
    else
    {
        cout << "FHTAGN!";
    }
}