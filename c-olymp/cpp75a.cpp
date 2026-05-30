#include <iostream>
using namespace std;
int gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    bool msemen = true;
    long long semen, anti;
    int n = 0;
    int gcds = 0;
    cin >> semen >> anti >> n;
    while (true)
    {

        if (msemen)
        {
            gcds = gcd(n, semen);
            n = n - gcds;
            if (n < 0)
            {
                cout << '1';
                break;
            }
            msemen = false;
        }
        else
        {
            gcds = gcd(n, anti);
            n = n - gcds;
            if (n < 0)
            {
                cout << '0';
                break;
            }
            msemen = true;
        }
    }
}
