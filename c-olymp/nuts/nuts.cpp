#include <iostream>
using namespace std;
int main()
{
    int N, M, K;
    cin >> N >> M >> K;
    if (N * M >= K)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}