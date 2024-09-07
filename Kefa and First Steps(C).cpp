#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    // Input the sequence
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Initialize variables
    int max_length = 1;
    int current_length = 1;

    // Iterate through the array
    for (int i = 1; i < n; ++i) {
        if (arr[i] >= arr[i - 1]) {
            current_length++;
        } else {
            current_length = 1;
        }
        max_length = max(max_length, current_length);
    }

    // Output the maximum non-decreasing subsegment length
    cout << max_length << endl;

    return 0;
}
