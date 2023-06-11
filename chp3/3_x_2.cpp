#include <iostream>

int main() {
	double miles = 0.0;
	std::cout << "Please give a number of miles you want to convert: " << std::endl;
	std::cin >> miles;
	std::cout << "That is : " << miles * 1.609 << " km" << std::endl;
	return 0;
}