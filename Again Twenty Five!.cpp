
#include <iostream>
using namespace std;

int main() {
    long long n; // Input as a long long to handle large values of n
    cin >> n;

    // Calculate 5^n modulo 100 (to get the last two digits)
    int result = 1;
    for (int i = 0; i < n % 20; i++) {
        result = (result * 5) % 100;
    }

    cout << result << endl;

    return 0;
}
