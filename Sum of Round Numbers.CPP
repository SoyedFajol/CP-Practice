#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int factor = 1;
        int count = 0;
        int temp = n;


        while(temp > 0) {
            if(temp % 10 != 0) {
                count++;
            }
            temp /= 10;
        }

        cout << count << endl;
        while(n > 0) {
            if(n % 10 != 0) {
                cout << (n % 10) * factor << " ";
            }
            n /= 10;
            factor *= 10;
        }
        cout << endl;
    }

    return 0;
}
