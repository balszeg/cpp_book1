#include <iostream>

int main() {
	char base_letter = 'a';

	while (base_letter < 123) {
		std::cout << base_letter << " " << int(base_letter) << std::endl;
		base_letter += 1;
	}

	return 0;
}