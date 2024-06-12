#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	int* pA = &a;
	int* pB = &b;
	int larger = (*pA > *pB) ? *pA : *pB;
	cout << "Larger number: " << larger << endl;
	return 0;
}