#include <iostream>
#include <vector>
using namespace std;
void dfs(vector<vector<int>> &g, vector<int> &seen, int v, int &count)
{
    seen[v] = 1;
    count++;
    for (int u : g[v])
    {
        if (!seen[u])
        {
            dfs(g, seen, u, count);
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    if (n != m)
    {
        cout << "NO";
        return 0;
    }
    vector<vector<int>> g(n + 1);
    for (int i = 0; i < m; i++)
    {
        int v, u;
        cin >> v >> u;
        g[v].push_back(u);
        g[u].push_back(v);
    }

    vector<int> seen(n + 1);
    int count = 0;

    dfs(g, seen, 1, count);

    if (count != n)
    {
        cout << "NO";
    }
    else
    {
        cout << "FHTAGN!";
    }
}