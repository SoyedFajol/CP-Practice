#include <iostream>
#include <cstdint>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        uint64_t n;
        cin >> n;

        if ((n & (n - 1)) == 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
