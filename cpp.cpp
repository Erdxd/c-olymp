#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
    long double best = 0.0;
    vector<long double> lamps;
    long long countoflamp, longofstreet = 0;
    cin >> countoflamp >> longofstreet;
    for (int i = 0; i < countoflamp; i++)
    {
        long double lamp = 0;
        cin >> lamp;
        lamps.push_back(lamp);
    }

    sort(lamps.begin(), lamps.end());
    long double L = 0, R = longofstreet;
    for (int i = 0; i < 1000; i++)
    {
        bool yeah = true;

        long double mid = L + (R - L) / 2.0;
        if (lamps[0] - mid <= 0 && lamps[lamps.size() - 1] + mid >= longofstreet)
        {

            for (int i = 0; i < lamps.size() - 1; i++)
            {
                if (2 * mid >= lamps[i + 1] - lamps[i])
                {
                    yeah = true;
                }
                else
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
        if (yeah == true)
        {
            best = mid;
            R = mid;
        }
        else
        {
            L = mid;
        }
    }
    cout << fixed;
    cout.precision(10);
    cout << best;
}
