#include <iostream>
using namespace std;

int main() {
	int x;

	int* p_x = &x;
	cout << "Enter number: ";
	cin >> x;
	if (*p_x > 0) {
		cout << "number is positive" << endl;
	}
	else {
		cout << "Number is negative" << endl;
	}

	return 0;
}