#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
	vector<double> distances;
	double dist;
	while (cin >> dist) {
		distances.push_back(dist);
	}

	sort(distances.begin(), distances.end());

	double sum = 0;
	double smallest = 0;
	double largest = 0;
	for (double i : distances) {
		if (i < smallest) {
			smallest = i;
		}
		if (i > largest) {
			largest = i;
		}
		sum += i;
	}
	cout << "The total distance is: " << sum << endl;
	cout << "The largest distance is: " << largest << endl;
	cout << "The smallest distance is: " << smallest << endl;
	cout << "The mean distance is: " << sum/distances.size() << endl;
}