#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	//subtask 1-5
	/*double first;
	double second;

	while (std::cin >> first >> second) {
		if (first < second) {
			std::cout << "The smaller value is: " << first << " the larger value is: " << second << std::endl;
			if ((second - first) < 1.0 / 100) {
				std::cout << "The numbers are almost equal." << std::endl;
			}
		}
		if (first > second) {
			std::cout << "The smaller value is: " << second << " the larger value is: " << first << std::endl;
			if ((first - second) < 1.0 / 100) {
				std::cout << "The numbers are almost equal." << std::endl;
			}
		}
		if(first == second) {
			std::cout << "The numbers are equal." << std::endl;
		}
	}*/

	//subtask 6
	/*double input;
	double smallest = 0;
	double largest = 0;
	while (std::cin >> input) {
		if (input < smallest) {
			smallest = input;
			std::cout << "The smaller value so far: " << smallest << std::endl;
		}
		if (largest < input) {
			largest = input;
			std::cout << "The largest value so far: " << largest << std::endl;
		}
	}*/

	//subtask 7-11
	constexpr double m_to_cm = 100;
	constexpr double in_to_cm = 2.54;
	constexpr double ft_to_in = 12;

	double input;
	double sum = 0;
	double smallest = 0;
	double largest = 0;

	std::string unit;

	std::vector<double> values;

	while (std::cin >> input >> unit) {
		if (unit == "cm") {
			std::cout << "Value converted: " << input * m_to_cm << " m; " << input / in_to_cm << " inch; " << input / in_to_cm / ft_to_in << " feat" << std::endl;
			if (input * m_to_cm < smallest) {
				smallest = input * m_to_cm;
			}
			if (input * m_to_cm > largest) {
				largest = input * m_to_cm;
			}
			sum += input * m_to_cm;
			values.push_back(input * m_to_cm);
		}
		if (unit == "m") {
			std::cout << "Value converted: " << input * m_to_cm << " cm; " << input * m_to_cm / in_to_cm << " inch; " << input * m_to_cm / in_to_cm / ft_to_in << " feat" << std::endl;
			if (input < smallest) {
				smallest = input;
			}
			if (input > largest) {
				largest = input;
			}
			sum += input;
			values.push_back(input);
		}
		if (unit == "in") {
			std::cout << "Value converted: " << input * in_to_cm << " cm; " << input * in_to_cm / m_to_cm << " m; " << input / ft_to_in << " feat" << std::endl;
			if (input * in_to_cm / m_to_cm < smallest) {
				smallest = input * in_to_cm / m_to_cm;
			}
			if (input * in_to_cm / m_to_cm > largest) {
				largest = input * in_to_cm / m_to_cm;
			}
			sum += input * in_to_cm / m_to_cm;
			values.push_back(input * in_to_cm / m_to_cm);
		}
		if (unit == "ft") {
			std::cout << "Value converted: " << input * ft_to_in * in_to_cm << " cm; " << input * ft_to_in * in_to_cm / m_to_cm << " m; " << input * ft_to_in << " inch" << std::endl;
			if (input * ft_to_in * in_to_cm / m_to_cm < smallest) {
				smallest = input * ft_to_in * in_to_cm / m_to_cm;
			}
			if (input * ft_to_in * in_to_cm / m_to_cm > largest) {
				largest = input * ft_to_in * in_to_cm / m_to_cm;
			}
			sum += input * ft_to_in * in_to_cm / m_to_cm;
			values.push_back(input * ft_to_in * in_to_cm / m_to_cm);
		}
		if (unit != "cm" && unit != "m" && unit != "in" && unit != "ft") {
			std::cout << "Illegal unit chosen! " << "(" << unit << ")" << std::endl;
		}
	}
	std::cout << "Smallest value (in meter): " << smallest << std::endl;
	std::cout << "Largest value (in meter): " << largest << std::endl;
	std::cout << "Sum of the values (in meter): " << sum << std::endl;

	std::sort(values.begin(), values.end());

	for (double i : values) {
		std::cout << i << " " << std::endl;
	}

	return 0;
}