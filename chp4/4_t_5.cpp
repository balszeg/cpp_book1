#include <iostream>

int square(int x) {
	int result = 0;
	int i = 0;
	while(i != x) {
		result += x;
		i += 1;
	}
	return result;
}

int main() {
	std::cout << "Squarred value: " << square(9) << std::endl;
	return 0;
}