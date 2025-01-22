#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c, d, sum = 0;
    string s;
    cin >> a >> b >> c >> d;
    cin >> s;
    for (char ch : s) {
        if (ch == '1') {
            sum += a;
        } else if (ch == '2') {
            sum += b;
        } else if (ch == '3') {
            sum += c;
        } else if (ch == '4') {
            sum += d;
        }
    }
    cout << sum << endl;
    return 0;
}
