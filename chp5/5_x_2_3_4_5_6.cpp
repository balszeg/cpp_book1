#include <iostream>

using namespace std;

double ctok(double c) // converts Celsius to Kelvin
{
	double k = c + 273.15;
	//5_x_4
	if (k <= 0) {
		return -1;
	}
	return k;
}

double ktoc(double k) // converts Kelvin to Celsius
{
	//5_x_5
	double c = k - 273.15;
	if (c <= -273.15) {
		return -1;
	}
	return c;
}

double ctof(double c) // converts Celsius to Fahrenheit
{
	//5_x_6
	// f = 9/5 * c + 32
	double f = (9/5 * c) + 32;
	return f;
}

int main()
{
	double c = 0; // declare input variable
	cin >> c; // retrieve temperature to input variable
	double k = ctok(c); // convert temperature
	//5_x_3
	if (k <= 0) {
		cout << "Given temperature is below absolute zero!";
		return 1;
	}
	cout << k << '/n'; // print out temperature in Kelvin
	return 0;
}