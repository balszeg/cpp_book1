#include <iostream>

int main() {
	double operand1;
	double operand2;
	std::string operation;
	std::cout << "Write one operation and two operands, please:" << std::endl;
	std::cin >> operation >> operand1 >> operand2;
	if (operation == "+") {
		std::cout << "Resolution: " << operand1 + operand2 << std::endl;
	}
	if (operation == "-") {
		std::cout << "Resolution: " << operand1 - operand2 << std::endl;
	}
	if (operation == "*") {
		std::cout << "Resolution: " << operand1 * operand2 << std::endl;
	}
	if (operation == "/") {
		std::cout << "Resolution: " << operand1 / operand2 << std::endl;
	}
	if (operation != "+" && operation != "-" && operation != "*" && operation != "/") {
		std::cout << "Unknown operation sign!" << std::endl;
	}

	return 0;
}