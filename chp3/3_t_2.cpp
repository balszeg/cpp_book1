#include <iostream>
#include <math.h>

int main()
{
	std::cout << "Please enter a integer value: ";
	int n;
	std::cin >> n;
	double m = n;
	std::cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\nthree times n == " << 3 * n
		<< "\ntwice n == " << n + n
		<< "\nn squared == " << n * n
		<< "\nhalf of n == " << n / 2
		<< "\nmodulo of n == " << n % 2
		<< "\nsquare root of n == " << sqrt(m)
		<< '\n'; // another name for newline (“end of line”) in output
}