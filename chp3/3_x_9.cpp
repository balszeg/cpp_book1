#include <iostream>

int main() {
	std::string word;
	std::cout << "Type in a number: " << std::endl;
	std::cin >> word;
	if (word == "0") {
		std::cout << "Your number is: zero" << std::endl;
	}
	if (word == "zero") {
		std::cout << "Your number is: 0 " << std::endl;
	}
	if (word == "1") {
		std::cout << "Your number is: one" << std::endl;
	}
	if (word == "one") {
		std::cout << "Your number is: 1 " << std::endl;
	}
	if (word == "2") {
		std::cout << "Your number is: two" << std::endl;
	}
	if (word == "two") {
		std::cout << "Your number is: 2 " << std::endl;
	}
	if (word == "3") {
		std::cout << "Your number is: three" << std::endl;
	}
	if (word == "three") {
		std::cout << "Your number is: 3 " << std::endl;
	}
	if (word == "4") {
		std::cout << "Your number is: four" << std::endl;
	}
	if (word == "four") {
		std::cout << "Your number is: 4 " << std::endl;
	}
	if (word != "0" && word != "zero" && word != "1" && word != "one" && word != "2" && word != "3" && word != "three" && word != "4" && word != "four"){
		std::cout << "Not a number I know" << std::endl;
	}

	return 0;
}