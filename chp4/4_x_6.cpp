#include <iostream>
#include <vector>

using namespace std;
int main() {
	vector<string> str_numbers = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	vector<string> num_numbers = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };
	string number;

	cout << "Please write a number: " << endl;
	
	while (cin >> number) {
		if (number.size() == 1) {
			int counter = 0;
			for (string i : num_numbers) {
				counter += 1;
				if (i == number) {
					cout << number << " - " << str_numbers[counter-1] << endl;
				}
			}
		}
		if (number.size() > 1) {
			int counter = 0;
			for (string i : str_numbers) {
				counter += 1;
				if (i == number) {
					cout << number << " - " << num_numbers[counter - 1] << endl;
				}
			}
		}
	}

	return 0;
}