#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectMelody(int n, int melody[]) {
    for (int i = 1; i < n; i++) {
        int interval = abs(melody[i] - melody[i - 1]);
        if (interval != 5 && interval != 7) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int melody[50];
        for (int i = 0; i < n; i++) {
            cin >> melody[i];
        }
        if (isPerfectMelody(n, melody)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
