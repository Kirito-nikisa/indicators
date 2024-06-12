#include <iostream>

using namespace std;

int main() {
    const int SIZE = 5;
    int sourceArray[SIZE] = { 1, 2, 3, 4, 5 };
    int targetArray[SIZE];

    int* sourcePtr = sourceArray;
    int* targetPtr = targetArray;

    for (int i = 0; i < SIZE; i++) {
        *targetPtr = *sourcePtr;
        sourcePtr++;
        targetPtr++;
    }

    cout << "Copied array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << targetArray[i] << " ";
    }
    cout << endl;

    return 0;
}
