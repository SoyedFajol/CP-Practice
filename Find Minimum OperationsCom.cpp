#include <iostream>

using namespace std;

int minOperations(long long n, long long k) {
    if (k == 1) return n;

    int operations = 0;
    while (n > 0) {
        operations += n % k;
        n /= k;
    }
    return operations;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;
        cout << minOperations(n, k) << "\n";
    }

    return 0;
}
