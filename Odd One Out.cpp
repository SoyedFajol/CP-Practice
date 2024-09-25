#include <iostream>
using namespace std;

int main()
{
    int t, a, b, c;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c;

        if ((a == b && a != c) || (b == c && b != a) || (a == c && a != b))
        {
            if (a == b)
                cout << c << endl;
            else if (b == c)
                cout << a << endl;
            else
                cout << b << endl;
        }
        else
        {
            cout << endl;
        }
    }

    return 0;
}
