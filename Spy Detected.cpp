#include <iostream>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long a[n];
        map<long long, long long> mp;


        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }

        long long uniqueIndex = -1;


        for (int i = 0; i < n; i++) {
            if (mp[a[i]] == 1) {
                uniqueIndex = i + 1;
                break;
            }
        }

        cout << uniqueIndex << endl;
    }
    return 0;
}
