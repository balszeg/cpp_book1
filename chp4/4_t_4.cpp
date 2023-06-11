#include <iostream>

int main() {
	for (char i = 'a'; i < 123; ++i) {
		std::cout << i << " " << int(i) << std::endl;
	}
	for (char i = 'A'; i < 91; ++i) {
		std::cout << i << " " << int(i) << std::endl;
	}
	for (char i = '0'; i < 58; ++i) {
		std::cout << i << " " << int(i) << std::endl;
	}

	return 0;
}