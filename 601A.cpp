#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
using namespace std;
int bfs(int fin, vector<vector<int>> &g, vector<bool> visit)
{
    queue<int> q;
    vector<int> dist(g.size(), -1);
    dist[1] = 0;
    visit[1] = true;
    q.push(1);
    while (!q.empty())
    {
        int current = q.front();
        q.pop();
        for (int i : g[current])
        {
            if (!visit[i])
            {
                visit[i] = true;
                dist[i] = dist[current] + 1;
                q.push(i);
            }
                }
        if (current == fin)
        {
            break;
        }
    }
    if (!visit[fin])
    {
        return -1;
    }
    return dist[fin];
}
int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> all(n + 1);

    vector<vector<int>> train(n + 1);

    for (int i = 0; i < m; i++)
    {
        int v, u;
        cin >> v >> u;
        train[v].push_back(u);
        train[u].push_back(v);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (!count(train[i].begin(), train[i].end(), j))
            {
                all[i].push_back(j);
            }
        }
    }
    vector<bool> vis(n + 1);
    int traindist = bfs(n, train, vis);
    int busdist = bfs(n, all, vis);
    if (busdist == -1 || traindist == -1)
    {
        cout << -1;
    }
    else
    {
        cout << max(traindist, busdist);
    }
}