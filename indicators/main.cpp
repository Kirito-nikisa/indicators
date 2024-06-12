#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Enter firs number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;

	int* pA = &a;
	int* pB = &b;

	int temp = *pA;
	*pA = *pB;
	*pB = temp;

	cout << "First number: " << a << " Second number: " << b << endl;

	return 0;
}