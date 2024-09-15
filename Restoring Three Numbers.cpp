#include<iostream>
#include<algorithm> // for sort
using namespace std;

int main ()
{
    int arr[4];
    // Reading input
    for(int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    // Sorting the array
    sort(arr, arr + 4);

    // The largest number is a + b + c
    int abc = arr[3];

    // We can now calculate a, b, and c
    int a = abc - arr[2]; // arr[2] is b + c, so a = (a + b + c) - (b + c)
    int b = abc - arr[1]; // arr[1] is a + c, so b = (a + b + c) - (a + c)
    int c = abc - arr[0]; // arr[0] is a + b, so c = (a + b + c) - (a + b)

    // Output the result
    cout << a << " " << b << " " << c;
    return 0;
}
