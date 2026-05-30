#include <iostream>
#include <vector>
using namespace std;
int binarysearch(vector<int> a, int need)
{
    int left = 0;
    int right = a.size() - 1;
    while (left <= right)
    {
        long long mid = (left + right) / 2;
        if (a[mid] == need)
        {
            return mid;
        }
        else if (a[mid] > need)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return 0;
}
int main()
{
    int n = 0;
    cin >> n;
    vector<int>
        a;
    for (int i = 0; i < 10; i = i + 2)
    {
        a.push_back(i);
    }
    int itog = binarysearch(a, n);
    cout << itog;
}