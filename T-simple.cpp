#include <iostream>
#include <unordered_map>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        bool yeah = true;
        long long a = 0;
        cin >> a;
        if (a == 1)
        {

            cout << "NO" << endl;
            continue;
        }
        long long r = round(sqrt(a));
        if (r * r == a)
        {
            for (int i = 2; i * i <= r; ++i)
            {
                if (r % i == 0)
                {
                    yeah = false;
                    break;
                }
            }
        }
        else
        {
            yeah = false;
        }
        if (yeah)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}