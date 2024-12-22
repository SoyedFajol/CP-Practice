#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;


        long long cycleSum = a + b + c;


        long long fullCycles = n / cycleSum;
        long long totalWalked = fullCycles * cycleSum;

        if (totalWalked >= n)
        {
            cout << fullCycles * 3 << endl;
            continue;
        }


        totalWalked += a;
        if (totalWalked >= n)
        {
            cout << fullCycles * 3 + 1 << endl;
            continue;
        }

        totalWalked += b;
        if (totalWalked >= n)
        {
            cout << fullCycles * 3 + 2 << endl;
            continue;
        }


        totalWalked += c;
        if (totalWalked >= n)
        {
            cout << fullCycles * 3 + 3 << endl;
            continue;
        }
    }

    return 0;
}
