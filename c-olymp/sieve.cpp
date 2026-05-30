#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
vector<bool> sieve(int n)
{
    vector<bool> simple(n + 1, true);
    if (n >= 0)
    {
        simple[0] = false;
    }
    else if (n >= 1)
    {
        simple[1] = false;
    }

    for (int i = 2; i * i <= n; ++i)
    {
        if (simple[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                simple[j] = false;
            }
        }
    }

    return simple;
}
int main()
{
    int n = 0;
    cin >> n;
    vector<bool> simple = sieve(n);
    for (int i = 2; i <= n; ++i)
    {
        if (simple[i])
        {
            cout << i << endl;
        }
    }
}
