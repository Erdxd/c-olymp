#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Styd
{
    int solvedP = 0;
    int sumof = 0;
    int credit = 0;
};

int main()
{
    Styd s1;
    Styd s3;
    Styd s5;

    int Limit = 300;
    int sumof1 = 0, sumof3 = 0, sumof5 = 0;
    vector<int> ArrayTime;
    int TimeByTask = 0;

    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> TimeByTask;
        ArrayTime.push_back(TimeByTask);
    }

    for (int i = 0; i < N; i++)
    {

        int Cr = s5.sumof + ArrayTime[i];
        if (Cr > Limit)
        {
            break;
        }
        s5.sumof = Cr;

        s5.credit += Cr;
        s5.solvedP++;
    }
    for (int i = N - 1; i >= 0; i--)
    {
        int Cr = s3.sumof + ArrayTime[i];
        if (Cr > Limit)
        {
            break;
        }
        s3.sumof = Cr;

        s3.credit += Cr;
        s3.solvedP++;
    }
    sort(ArrayTime.begin(), ArrayTime.end());

    for (int i = 0; i < N; i++)
    {

        int Cr = s1.sumof + ArrayTime[i];
        if (Cr > Limit)
        {
            break;
        }
        s1.sumof = Cr;

        s1.credit += Cr;
        s1.solvedP++;
    }
    Styd Winner = s5;
    int stydwinner = 5;
    if (s3.solvedP > Winner.solvedP || (s3.credit <= Winner.credit && s3.solvedP == Winner.solvedP))
    {
        Winner = s3;
        stydwinner = 3;
    }
    if (s1.solvedP > Winner.solvedP || (s1.credit <= Winner.credit && s1.solvedP == Winner.solvedP))
    {

        stydwinner = 1;
    }
    cout << stydwinner;

    return 0;
}