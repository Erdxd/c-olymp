#include <iostream>
using namespace std;
int main()
{
    int final = 0;
    int B, P, Num;
    int N, P1, Num1;
    cin >> B >> P >> Num;
    cin >> N >> P1 >> Num1;
    int finalB = 0;
    int finalN = 0;
    int Percent = B * P / 100;
    int Percent1 = N * P1 / 100;
    int howb = B - Percent;
    int hown = N - Percent1;
    if (howb > hown)
    {
        int how = howb - hown;
        how = how * Num;
        final = (Percent * Num) + (Percent1 * Num1) + how;
    }
    else if (hown > howb)
    {
        int how = hown - howb;
        how = how * Num1;
        final = (Percent * Num) + (Percent1 * Num1) + how;
    }
    else
    {
        final = (Percent1 * Num1) + (Percent * Num);
    }
    cout << final;
    return 0;
}