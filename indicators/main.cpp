#include <iostream>

using namespace std;

int main() {
    float num1, num2;
    char op;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the operation (+, -, *, /): ";
    cin >> op;
    cout << "Enter the second number: ";
    cin >> num2;

    float result;
  
    float* ptr_result = &result;

    switch (op) {
    case '+':
        *ptr_result = num1 + num2;
        break;
    case '-':
        *ptr_result = num1 - num2;
        break;
    case '*':
        *ptr_result = num1 * num2;
        break;
    case '/':
        if (num2 != 0) {
            *ptr_result = num1 / num2;
        }
        else {
            cout << "Error: division by zero" << endl;
            return 1;
        }
        break;
    default:
        cout << "Error: unknown operation" << endl;
        return 1;
    }

    cout << "Result: " << *ptr_result << endl;

    return 0;
}
