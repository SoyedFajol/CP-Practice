#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        long long a, b;
        cin >> a >> b;

        if (a == 1 && b == 1)
        {
            cout << "Case " << i << ": Evenius" << endl;
        }
        else if (a == 2 || a == 3)
        {
            cout << "Case " << i << ": Oddius" << endl;
        }
        else if (a % 4 == 1 && b == 2)
        {
            cout << "Case " << i << ": Evenius" << endl;
        }
        else
        {
            cout << "Case " << i << ": Oddius" << endl;
        }
    }
    return 0;
}
