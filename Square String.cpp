#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        if (a.size() % 2 == 0) {
            string x, y;
            for (int i = 0; i < a.size() / 2; i++) {
                x += a[i];
            }
            for (int i = a.size() / 2; i < a.size(); i++) {
                y += a[i];
            }
            if (x == y) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

