#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Create(int* a, const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++) {
        a[i] = Low + rand() % (High - Low + 1);
    }
}

void Print(int* a, const int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << a[i];
    }
    cout << endl;
}

void Inverse(int* a, const int n) {
    for (int i = 0; i < n / 2; i++) {
        int tmp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = tmp;
    }
}

template <typename T>
void SecondCreate(T* a, const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++) {
        a[i] = Low + rand() % (High - Low + 1);
    }
}

template <typename T>
void SecondPrint(T* a, const int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << a[i];
    }
    cout << endl;
}

template <typename T>
void SecondInverse(T* a, const int n) {
    for (int i = 0; i < n / 2; i++) {
        T tmp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = tmp;
    }
}

int main() {
    srand((unsigned)time(NULL));

    const int n = 9;
    int a[n];
    int Low = -10;
    int High = 10;

    // Використання функцій для масиву int
    Create(a, n, Low, High);
    Print(a, n);
    Inverse(a, n);
    Print(a, n);

    const int size = 9;
    double b[size];
    double low = -10.0;
    double high = 10.0;

    // Використання шаблонних функцій для масиву double
    SecondCreate(b, size, low, high);
    SecondPrint(b, size);
    SecondInverse(b, size);
    SecondPrint(b, size);

    return 0;
}
