#include <iostream>
#include <vector>

using namespace std;
int main() {
	double value1;
	double value2;
	char sign;

	cout << "Please declare two value and an operator!" << endl;
	cin >> value1 >> sign >> value2;

	if (sign == '+') {
		cout << "The sum of " << value1 << " and " << value2 << " is " << value1 + value2 << endl;
	}
	if (sign == '-') {
		cout << "The difference of " << value1 << " and " << value2 << " is " << value1 - value2 << endl;
	}
	if (sign == '*') {
		cout << "The product of " << value1 << " and " << value2 << " is " << value1 * value2 << endl;
	}
	if (sign == '/') {
		cout << "The ratio of " << value1 << " and " << value2 << " is " << value1 / value2 << endl;
	}
	if (sign != '+' && sign != '-' && sign != '*' && sign != '/') {
		cout << "Illegal operator!" << endl;
		return 1;
	}

	return 0;
}