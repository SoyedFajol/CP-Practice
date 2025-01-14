#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        int count1 = 0, count2 = 0;

        for (char c : s)
        {
            if (c == 'A')
            {
                count1++;
            }
            else if (c == 'B')
            {
                count2++;
            }
        }

        if (count1 > count2)
        {
            cout << "A" << endl;
        }
        else if (count2 > count1)
        {
            cout << "B" << endl;
        }
    }

    return 0;
}
