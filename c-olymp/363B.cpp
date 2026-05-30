#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int ddd = 0;
    long long sum = 0;
    long long best = 1e16;
    int n, k = 0;
    cin >> n >> k;
    vector<int> allh;
    for (int i = 0; i < n; i++)
    {
        int h = 0;
        cin >> h;
        allh.push_back(h);
    }
    int left = 0;
    int right = k;
    vector<int> pref(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        pref[i + 1] = pref[i] + allh[i];
    }
    while (right <= allh.size())
    {
        int sum = pref[right] - pref[left];
        if (sum < best)
        {
            best = sum;
            ddd = left + 1;
        }

        right++;
        left++;
    }
    cout << ddd;
}
