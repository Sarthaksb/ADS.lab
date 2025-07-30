// Number of one's followed by numbers of zero



#include <iostream>
using namespace std;

int main() {
    int a[100], n;

    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter array elements (1s followed by 0s): ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int low = 0, high = n - 1, mid;
    int first_zero = -1;

    // Binary search to find the first 0
    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == 0) {
            first_zero = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    // Print result
    if (first_zero != -1)
        cout << "Number of zeroes: " << (n - first_zero ) << endl;
    else
        cout << "No zeroes found" << endl;

    return 0;
}
