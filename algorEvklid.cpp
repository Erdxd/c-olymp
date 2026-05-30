#include <iostream>
using namespace std;

int algorEvklid(long long a, long long b)
{
    long long c = 0;
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    long long a, b;
    cin >> a >> b;
    cout << algorEvklid(a, b) << endl;
    cout << (a * b) / (algorEvklid(a, b));
}
