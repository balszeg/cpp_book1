#include <iostream>

using namespace std;
int main() {
	double a;
	double b;
	double c;
	double x1;
	double x2;
	// ax^2+bx+c=0
	//x1,2 = -b +/- sqrt(b^2-4ac)/2a

	cout << "Please declare a, b, c: " << endl;
	cin >> a >> b >> c;

	double first_part = (b * b) - (4 * a * c);
	if (first_part < 0) {
		cout << "There are no real roots with given a, b, c!";
		return 1;
	}
	double second_part = sqrt(first_part);
	x1 = (-b + second_part) / (2 * a);
	x2 = (-b - second_part) / (2 * a);

	cout << "Solution x1: " << x1 << " x2: " << x2 << endl;

	return 0;
}