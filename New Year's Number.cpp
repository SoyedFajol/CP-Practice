#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        bool possible = false;

        for (int x = 0; x <= n / 2020; x++)
        {
            if ((n - x * 2020) % 2021 == 0)
            {
                possible = true;
                break;
            }
        }

        if (possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
