#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> bfs(int start, vector<vector<int>> &g, vector<bool> &vis, int target)
{
    queue<int> q;
    vector<int> p(g.size(), -1);
    vector<int> path;
    vis[start] = true;
    q.push(start);

    while (!q.empty())
    {

        int current = q.front();
        q.pop();

        if (current == target)
        {
            break;
        }
        for (int i : g[current])
        {
            if (!vis[i])
            {
                p[i] = current;
                vis[i] = true;
                q.push(i);
            }
        }
    }
    if (!vis[target])
    {
        cout << "have not";
        return path;
    }
    for (int v = target; v != -1; v = p[v])
    {
        path.push_back(v);
    }
    reverse(path.begin(), path.end());
    return path;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n + 1);
    for (int i = 0; i < m; i++)
    {
        int v, u;
        cin >> v >> u;
        g[v].push_back(u);
        g[u].push_back(v);
    }
    vector<bool> vis(n + 1);
    vector<int> path = bfs(1, g, vis, 10);
}