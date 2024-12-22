#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        vector<int> dp(n + 1, 0);
        for (int i = n - 1; i >= 0; --i) {
            dp[i] = dp[i + 1];
            if (i + 1 < n) {
                dp[i] = max(dp[i], a[i] - b[i + 1] + dp[i]);
            } else {
                dp[i] = max(dp[i], a[i]);
            }
        }
        cout << dp[0] << endl;
    }

    return 0;
}
