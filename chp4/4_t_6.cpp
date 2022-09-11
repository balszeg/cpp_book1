#include <iostream>
#include <vector>

int main() {
	std::vector<std::string> words;
	for (std::string temp; std::cin >> temp;) {
		words.push_back(temp);
	}
	std::string disliked = "Broccoli";
	std::string disliked_2 = "Lajos";
	std::string disliked_3 = "Alma";
	
	for (std::string i : words) {
		if (i == disliked || i == disliked_2 || i == disliked_3) {
			std::cout << "BEEP" << std::endl;
		}
		else {
			std::cout << i << std::endl;
		}
	}

	return 0;
}