#include <iostream>

int main() {
	int number;
	std::cout << "Please give a number: " << std::endl;
	std::cin >> number;
	if ((number % 2) == 0) {
		std::cout << "Your number " << number << " is even number." << std::endl;
	}
	else {
		std::cout << "Your number " << number << " is odd number." << std::endl;
	}


	return 0;
}