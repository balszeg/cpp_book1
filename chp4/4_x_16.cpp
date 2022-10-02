#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int input;
	int modus = 0;
	int count = 0;
	int largest_count = 0;
	std::vector<int> inputs;

	while (std::cin >> input) {
		inputs.push_back(input);
	}

	std::sort(inputs.begin(), inputs.end());

	for (int i = 0; i < inputs.size(); ++i) {
		if (i == 0 || inputs[i - 1] == inputs[i]) {
			count++;
		}
		else{
			if (largest_count < count) {
				largest_count = count;
				modus = inputs[i - 1];
			}
			count = 0;
		}
	}
	
	std::cout << "The modus is: " << modus << std::endl;

	return 0;
}