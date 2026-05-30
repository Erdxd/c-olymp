#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
bool can(long long v, long long k, long long n)
{

    long long sum = 0;
    while (v > 0)
    {
        sum = sum + v;

        v = v / k;
        if (sum >= n)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    long long best = 1000000000000000000;
    long long n, k = 0;
    cin >> n >> k;
    long long left = 0;
    long long right = n;
    while (left <= right)
    {
        long long mid = (right + left) / 2;
        if (can(mid, k, n))
        {
            if (mid < best)
            {
                best = mid;
            }
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    cout << best;
}
