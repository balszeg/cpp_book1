#include <iostream>

using namespace std;
int main() {
	int rice = 0;
	
	for (int i = 0; i < 64; ++i) {
		if (i == 0) {
			rice = 1;
		}
		if (i > 0) {
			rice *= 2;
		}

		cout << "Current square: " << i + 1 << endl;
		cout << "Current amount of rice: " << rice << endl;

		if (rice > 1000) { //11. square
			cout << "At least 1000 square number: " << i + 1 << endl;
		}

		if (rice > 1000000) { //21. square
			cout << "At least 1000000 square number: " << i + 1 << endl;
		}

		if (rice > 1000000000) { //31. square
			cout << "At least 1000000000 square number: " << i + 1 << endl;
		}

		cout << "------------------------------------" << endl;
	}

}