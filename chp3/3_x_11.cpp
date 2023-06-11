#include <iostream>

int main() {
	double pennies;
	double nickels;
	double dimes;
	double quarters;
	double half_dollars;
	double one_dollars;
	std::cout << "How many pennies do you have?" << std::endl;
	std::cin >> pennies;
	std::cout << "How many nickels do you have?" << std::endl;
	std::cin >> nickels;
	std::cout << "How many dimes do you have?" << std::endl;
	std::cin >> dimes;
	std::cout << "How many quarters do you have?" << std::endl;
	std::cin >> quarters;
	std::cout << "How many half dollars do you have?" << std::endl;
	std::cin >> half_dollars;
	std::cout << "How many one dollars do you have?" << std::endl;
	std::cin >> one_dollars;

	if (pennies > 0) {
		if (pennies == 1) {
			std::cout << "You have 1 penny." << std::endl;
		}
		else {
			std::cout << "You have " << pennies << " pennies." << std::endl;
		}
	}

	if (nickels > 0) {
		if (nickels == 1) {
			std::cout << "You have 1 nickel." << std::endl;
		}
		else {
			std::cout << "You have " << nickels << " nickels." << std::endl;
		}
	}

	if (dimes > 0) {
		if (dimes == 1) {
			std::cout << "You have 1 dime." << std::endl;
		}
		else {
			std::cout << "You have " << dimes << " dimes." << std::endl;
		}
	}

	if (quarters > 0) {
		if (quarters == 1) {
			std::cout << "You have 1 quarter." << std::endl;
		}
		else {
			std::cout << "You have " << quarters << " quarters." << std::endl;
		}
	}

	if (half_dollars > 0) {
		if (half_dollars == 1) {
			std::cout << "You have 1 half dollar." << std::endl;
		}
		else {
			std::cout << "You have " << half_dollars << " half dollars." << std::endl;
		}
	}

	if (one_dollars > 0) {
		if (one_dollars == 1) {
			std::cout << "You have 1 one dollar." << std::endl;
		}
		else {
			std::cout << "You have " << one_dollars << " one dollars." << std::endl;
		}
	}

	std::cout << "The value of all of your coins is " << pennies+nickels*5+dimes*10+quarters*25+half_dollars*50+one_dollars*100 << " cents." << std::endl;

	std::cout << "The value of all of your coins in dollar is $" << (pennies + nickels * 5 + dimes * 10 + quarters * 25 + half_dollars * 50 + one_dollars * 100)/100 << "." << std::endl;

	return 0;
}