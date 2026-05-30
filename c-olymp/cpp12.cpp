#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> all(n + 1);
    for (int i = 1; i < n; i++)
    {
        cin >> all[i];
    }

    int current = 1;
    while (current < t)
    {
        current = current + all[current];
    }
    if (current == t)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int graph()
{
    int a, b;
    cin >> a >> b;
    vector<vector<int>> g(a + 1);
    for (int i = 0; i < b; i++)
    {
        int c, d;
        cin >> c >> d;
        g[c].push_back(d);
        g[d].push_back(c);
    }
    for (int i = 1; i <= a; i++)
    {
        cout << i << "Have:";

        for (int z : g[i])
        {
            cout << z << " ";
        }
    }
}