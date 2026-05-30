#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int mid = 0;
    int best = 0;
    int n, t;
    cin >> n >> t;
    vector<int> nall;
    vector<int> pref(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int a = 0;
        cin >> a;
        nall.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        pref[i + 1] = pref[i] + nall[i];
    }
    for (int i = 0; i < n; i++)
    {
        int high = n;
        int low = i;
        while (low <= high)
        {
            mid = (high + low) / 2;
            if (pref[mid] - pref[i] <= t)
            {
                low = mid + 1;
                if (mid - i > best)
                {
                    best = mid - i;
                }
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    cout << best;
}
