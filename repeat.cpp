#include <iostream>
#include <vector>
using namespace std;
void dfs(int v, vector<vector<int>> &g, vector<int> &seen, int &count)
{
    seen[v] = 1;
    count++;

    for (int i : g[v])
    {
        if (!seen[i])
        {
            dfs(i, g, seen, count);
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
        int v, u;
        cin >> v >> u;
        g[v].push_back(u);
        g[u].push_back(v);
    }

    vector<int> seen(g.size());
    int count = 0;
    dfs(1, g, seen, count);
    if (n != count)
    {
        cout << "NO";
    }
    else
    {
        cout << "FHTAGN!";
    }
}