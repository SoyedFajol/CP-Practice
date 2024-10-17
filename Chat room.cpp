#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cin >> a;
    string s = "hello";
    int x = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (x < s.size() && s[x] == a[i])
        {
            x++;
        }
    }

    if (x == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
