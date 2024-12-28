#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        unordered_map<int, int> freq_map;
        bool found = false;

        for (int i = 0; i < n; i++) {
            int p;
            cin >> p;
            freq_map[p]++;


            if (freq_map[p] == 3) {
                cout << p << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << -1 << endl;
        }
    }

    return 0;
}
