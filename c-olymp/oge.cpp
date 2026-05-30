#include <iostream>

using namespace std;
int main()
{
    int n = 1;

    int count = 0;
    while (n != 0)
    {
        string ans = "";

        cin >> n;
        int k = n;

        if (n % 8 == 6)
        {
            while (k != 0)
            {

                int d = k % 8;
                ans += to_string(d);
                k = k / 8;
            }

            if (ans.size() == 4)
            {
                count++;
            }
        }
    }
    cout << count;
}
