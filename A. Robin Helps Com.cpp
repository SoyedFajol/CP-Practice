#include <iostream>
using namespace std;

const int MAX_N = 50;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int gold[MAX_N];
        for (int i = 0; i < n; i++)
        {
            cin >> gold[i];
        }
        int current_gold = 0;
        int people = 0;
        for (int i = 0; i < n; i++)
        {
            if (gold[i] >= k)
            {
                current_gold += gold[i];
            }
            else if (gold[i] == 0 && current_gold > 0)
            {
                current_gold--;
                people++;
            }
        }
        cout << people << endl;
    }
    return 0;
}
