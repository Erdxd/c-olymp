#include <iostream>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n = 0, k = 0;
        cin >> n >> k;
        int result = k + (k - 1) / (n - 1);
        cout << result << endl;
    }
}