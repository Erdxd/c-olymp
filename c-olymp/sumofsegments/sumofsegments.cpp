#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
    int l, r = 0;
    int m = 0;
    long long N = 0;
    cin >> N;
    vector<long long> prefixsum(N + 1, 0);

    vector<long long> ain;
    for (int i = 0; i < N; i++)
    {
        long long a = 0;
        cin >> a;
        ain.push_back(a);
    }
    for (int i = 0; i < N; i++)
    {
        prefixsum[i + 1] = prefixsum[i] + ain[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> l >> r;
        long long ad = prefixsum[r] - prefixsum[l - 1];
        cout << ad << " ";
    }
}
