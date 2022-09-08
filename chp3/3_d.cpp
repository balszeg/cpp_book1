#include <iostream>

int main() {
	std::string first_name;
	std::string friend_name;
	char friend_sex = 0;
	int age = 0;
	std::cout << "Enter the name of the person you want to write to:" << std::endl;
	std::cin >> first_name;
	std::cout << "Enter the name of another person:" << std::endl;
	std::cin >> friend_name;
	std::cout << "Enter the sex of your friend: (m/f)" << std::endl;
	std::cin >> friend_sex;
	std::cout << "Enter the age of your friend: " << std::endl;
	std::cin >> age;
	std::cout << "Dear " << first_name << "," << std::endl;
	std::cout << "	How are you? I am fine. I miss you. I have a dream about you. It was a nightmare. We should never talk again!" << std::endl;
	std::cout << "Have you seen " << friend_name << " lately?";
	if (friend_sex == 'm') {
		std::cout << "If you see " << friend_name << " please ask him to call me." << std::endl;
	}
	if (friend_sex == 'f') {
		std::cout << "If you see " << friend_name << " please ask her to call me." << std::endl;
	}

	if (age == 0 || age > 110) {
		std::cout << "You're kidding!" << std::endl;
	}
	else {
		std::cout << "I hear you just had a birthday and you are " << age << " years old!" << std::endl;
		if (age < 12) {
			std::cout << "Next year you will be " << age+1 << std::endl;
		}
		if (age == 17) {
			std::cout << "Next year you will be able to vote." << std::endl;
		}
		if (age > 70) {
			std::cout << "I hope you are enjoying retirement." << std::endl;
		}
	}

	std::cout << "Yours sincerely," << std::endl << std::endl << std::endl << "Mag Izeal" << std::endl;

	return 0;
}