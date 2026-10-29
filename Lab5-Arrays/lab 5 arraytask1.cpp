
#include <iostream>
using namespace std;

int main() {

    // Declare and initialize an array
    int arr[5] = {5, 3, 8, 1, 2};
    int n = 5;

    // Find maximum and minimum values
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {

        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Display array before sorting
    cout << "Before Sorting: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Bubble Sort in ascending order
    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {

                // Swap two elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display sorted array
    cout << "After Sorting: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Display maximum and minimum values
    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;

    return 0;
}

