#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int MAX = 100000;
int bfs(int start, int fin)
{

    queue<int> q;
    vector<int> dist(MAX, -1);
    q.push(start);
    dist[start] = 0;

    while (!q.empty())
    {

        int current = q.front();
        q.pop();
        if (current == fin)
        {
            break;
        }

        int next1 = current * 2;
        int next2 = current - 1;
        if (next1 > 0 && next1 < MAX && dist[next1] == -1)
        {
            dist[next1] = dist[current] + 1;
            q.push(next1);
        }
        if (next2 > 0 && dist[next2] == -1)
        {
            dist[next2] = dist[current] + 1;
            q.push(next2);
        }
    }
    return dist[fin];
}
int main()
{
    int start, fin;
    cin >> start >> fin;
    int count = bfs(start, fin);
    cout << count;
}
