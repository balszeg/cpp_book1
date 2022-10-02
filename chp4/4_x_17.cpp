#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::string input;
	std::string modus;
	std::string max;
	std::string min = "z";
	int count = 0;
	int largest_count = 0;
	std::vector<std::string> inputs;

	while (std::cin >> input) {
		if (input == "terminate") {
			break;
		}
		inputs.push_back(input);
	}

	std::cout << std::endl;

	std::sort(inputs.begin(), inputs.end());

	for (int i = 0; i < inputs.size(); ++i) {

		if (i == 0 || inputs[i - 1] == inputs[i]) {
			count++;
		}
		else {
			if (inputs[i] < min) {
				min = inputs[i];
			}

			if (inputs[i] > max) {
				max = inputs[i];
			}

			if (largest_count < count) {
				largest_count = count;
				modus = inputs[i - 1];
			}
			count = 0;
		}
	}

	std::cout << "Max of the strings: " << max << std::endl;
	std::cout << "Min of the strings: " << min << std::endl;
	std::cout << "The modus is: " << modus << std::endl;

	return 0;
}