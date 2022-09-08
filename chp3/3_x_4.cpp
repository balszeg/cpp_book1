#include <iostream>

int main() {
	int val1;
	int val2;
	std::cout << "Please give me number1: " << std::endl;
	std::cin >> val1;
	std::cout << "Please give me number2: " << std::endl;
	std::cin >> val2;
	if (val1 > val2) {
		std::cout << "The larger value is " << val1 << std::endl;
		std::cout << "The smaller value is " << val2 << std::endl;
	}
	else {
		std::cout << "The larger value is " << val2 << std::endl;
		std::cout << "The smaller value is " << val1 << std::endl;
	}

	std::cout << "The sum of the two value is " << val1 + val2 << std::endl;
	std::cout << "The difference of the two value is " << val1 - val2 << std::endl;
	std::cout << "The product of the two value is " << val1 * val2 << std::endl;
	std::cout << "The ratio of the two value is " << val1 / val2 << std::endl;

	return 0;
}