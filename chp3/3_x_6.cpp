#include <iostream>

int main() {
	int val1;
	int val2;
	int val3;
	std::cout << "Please give me number1: " << std::endl;
	std::cin >> val1;
	std::cout << "Please give me number2: " << std::endl;
	std::cin >> val2;
	std::cout << "Please give me number3: " << std::endl;
	std::cin >> val3;
	if (val1 < val2) {
		if (val2 < val3) {
			std::cout << val1 << " " << val2 << " " << val3 << std::endl;
		}
		if (val2 == val3) {
			std::cout << val1 << " "  <<  val2 << " " << val3 << std::endl;
		}
	}
	if (val2 < val1) {
		if (val1 < val3) {
			std::cout << val2 << " " << val1 << " " << val3 << std::endl;
		}
		if (val1 == val3) {
			std::cout << val2 << " " << val1 << " " << val3 << std::endl;
		}
	}
	if (val1 == val2) {
		if (val1 < val3) {
			std::cout << val1 << " " << val2 << " " << val3 << std::endl;
		}
		if (val1 == val3) {
			std::cout << val1 << " " << val2 << " " << val3 << std::endl;
		}
	}
	if (val1 < val3) {
		if (val3 < val2) {
			std::cout << val1 << " " << val3 << " " << val2 << std::endl;
		}
		if (val3 == val2) {
			std::cout << val1 << " " << val3 << " " << val2 << std::endl;
		}
	}
	if (val3 < val1) {
		if (val1 < val2) {
			std::cout << val3 << " " << val1 << " " << val2 << std::endl;
		}
		if (val1 == val2) {
			std::cout << val3 << " " << val1 << " " << val2 << std::endl;
		}
	}
	if (val1 == val3) {
		if (val3 < val2) {
			std::cout << val1 << " " << val3 << " " << val2 << std::endl;
		}
		if (val3 == val2) {
			std::cout << val1 << " " << val3 << " " << val2 << std::endl;
		}
	}
	if (val2 < val3) {
		if (val3 < val1) {
			std::cout << val2 << " " << val3 << " " << val1 << std::endl;
		}
		if (val3 == val1) {
			std::cout << val2 << " " << val3 << " " << val1 << std::endl;
		}
	}
	if (val3 < val2) {
		if (val2 < val1) {
			std::cout << val3 << " " << val2 << " " << val1 << std::endl;
		}
		if (val2 == val1) {
			std::cout << val3 << " " << val2 << " " << val1 << std::endl;
		}
	}

	return 0;
}