#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int m = 0;
    int n = 0;
    vector<int> heap;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a = 0;
        cin >> a;
        heap.push_back(a);
    }
    vector<int> pref(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        pref[i + 1] = pref[i] + heap[i];
    }
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int ans = -1;

        int a = 0;
        cin >> a;
        int left = 0;
        int right = pref.size() - 1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (pref[mid] >= a)
            {
                ans = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        cout << ans << endl;
    }
}