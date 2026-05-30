#include <iostream>
using namespace std;
double getcoast(double l)
{
    return l * l * l + 5 * l * l + 10 * l;
}
long double realbinarsearch(double budget, long double max)
{
    double left = 0.0;
    double right = 100.0;

    for (int i = 0; i < 100; i++)
    {
        double mid = left + (right - left) / 2.0;
        if (getcoast(mid) > budget)
        {
            right = mid;
        }
        else if (getcoast(mid) < budget)
        {
            left = mid;
        }
    }
    return left;
}
