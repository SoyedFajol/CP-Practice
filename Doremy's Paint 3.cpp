#include <iostream>
#include <map>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        map<int, int> mp;
        vector<int> v;
        int x = 0;


        for (int i = 0; i < n; i++) {
            cin >> x;
            mp[x]++;
        }


        if (mp.size() > 2) {
            cout << "NO" << endl;
            continue;
        }


        if (mp.size() == 1) {
            cout << "YES" << endl;
            continue;
        }


        for (auto it : mp) {
            v.push_back(it.second);
        }


        if (abs(v[0] - v[1]) > 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
