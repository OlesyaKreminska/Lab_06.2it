#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void create(int* arr, int lower, int upper, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = (rand() % (upper - lower + 1)) + lower;
    }
}

void displayArray(const int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << setw(4) << arr[i];
        if (i != n - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}

int findSmallestPairedElement(const int* arr, int n) {
    int smallest = -1;  
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {  
            if (smallest == -1 || arr[i] < smallest) {
                smallest = arr[i]; 
            }
        }
    }
    return smallest;
}

int main() {
    srand(time(0));

    int lower, upper, n;
    cout << "Enter the lower bound of the range: ";
    cin >> lower;
    cout << "Enter the upper bound of the range: ";
    cin >> upper;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr = new int[n];
    create(arr, lower, upper, n);

    cout << "Array: ";
    displayArray(arr, n);

    int smallestPaired = findSmallestPairedElement(arr, n);

    if (smallestPaired != -1) {
        cout << "The smallest paired element in the array is: " << smallestPaired << endl;
    }
    else {
        cout << "There are no even numbers in the array." << endl;
    }

    delete[] arr;
    return 0;
}
