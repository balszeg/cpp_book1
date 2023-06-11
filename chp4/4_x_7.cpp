#include <iostream>
#include <vector>

using namespace std;
int main() {
	vector<string> str_numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	vector<string> num_numbers = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };
	string str_value1;
	string str_value2;
	int value1;
	int value2;
	char sign;

	cout << "Please declare two value and an operator! Separate them with EOL character!" << endl;
	cin >> str_value1 >> sign >> str_value2;
	
	if (str_value1.size() == 1) {
		int counter = 0;
		for (string i : num_numbers) {
			counter += 1;
			if (i == str_value1) {
				value1 = counter - 1;
			}
		}
	}

	if (str_value2.size() == 1) {
		int counter = 0;
		for (string i : num_numbers) {
			counter += 1;
			if (i == str_value2) {
				value2 = counter - 1;
			}
		}
	}
	if (str_value1.size() > 1) {
		int counter = 0;
		for (string i : str_numbers) {
			counter += 1;
			if (i == str_value1) {
				value1 = counter - 1;
			}
		}
	}
	if (str_value2.size() > 1) {
		int counter = 0;
		for (string i : str_numbers) {
			counter += 1;
			if (i == str_value2) {
				value2 = counter - 1;
			}
		}
	}

	if (sign == '+') {
		cout << "The sum of " << str_value1 << " and " << str_value2 << " is " << value1 + value2 << endl;
	}
	if (sign == '-') {
		cout << "The difference of " << str_value1 << " and " << str_value2 << " is " << value1 - value2 << endl;
	}
	if (sign == '*') {
		cout << "The product of " << str_value1 << " and " << str_value2 << " is " << value1 * value2 << endl;
	}
	if (sign == '/') {
		cout << "The ratio of " << str_value1 << " and " << str_value2 << " is " << value1 / value2 << endl;
	}
	if (sign != '+' && sign != '-' && sign != '*' && sign != '/') {
		cout << "Illegal operator!" << endl;
		return 1;
	}

	return 0;
}