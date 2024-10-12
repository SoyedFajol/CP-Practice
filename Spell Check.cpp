#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a;
        string s;
        cin >> a;
        cin >> s;

        string target = "Timur";
        sort(s.begin(), s.end());
        sort(target.begin(), target.end());

        if (s == target) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
