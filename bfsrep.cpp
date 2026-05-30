#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
vector<int> bfs(int start, int fin, vector<vector<int>> &g, vector<bool> &vis)
{
    vector<int> pred(g.size(), -1);
    vector<int> path;
    vector<int> dist(g.size(), -1);
    vector<int> NO(1, 0);
    vis[start] = true;
    queue<int> q;
    q.push(start);
    while (!q.empty())
    {
        int current = q.front();
        q.pop();
        if (current == fin)
        {
            break;
        }
        for (int i : g[current])
        {
            if (!vis[i])
            {
                q.push(i);
                dist[i] = dist[current] + 1;
                vis[i] = true;
                pred[i] = current;
            }
        }
    }
    if (!vis[fin])
    {
        cout << "Have not";
        return NO;
    }
    for (int v = fin; v != -1; v = pred[v])
    {
        path.push_back(v);
    }
    reverse(path.begin(), path.end());
    return path;
}
int main()
{
    int n;
    cin >> n;
    int start, fin;
    cin >> start >> fin;
    vector<vector<int>> g(n + 1);
    vector<vector<int>> matrix(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            cin >> matrix[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (matrix[i][j] == 1)
            {

                g[i].push_back(j);
            }
        }
    }

    vector<bool> vis(n + 1);
    vector<int> path = bfs(start, fin, g, vis);
    if (path.size() > 0)
    {
        cout << path.size() - 1 << endl;
        for (int i : path)
        {
            cout << i << " ";
        }
    }
    else
    {
        cout << "NO";
    }
}