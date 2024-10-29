#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n], maxHeight = 0, minHeight = 101, maxIndex = 0, minIndex = 0;

    // Input heights and find max and min heights with their indices
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > maxHeight) {
            maxHeight = arr[i];
            maxIndex = i;
        }
        if (arr[i] <= minHeight) {
            minHeight = arr[i];
            minIndex = i;
        }
    }

    // If the maximum height soldier is before the minimum height soldier, we need to decrement minIndex by 1
    if (maxIndex > minIndex) {
        minIndex++;
    }

    // Calculate the minimum number of swaps needed
    int swaps = maxIndex + (n - 1 - minIndex);
    cout << swaps << endl;

    return 0;
}
