#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
	vector<double> temps;
	for (double temp; cin >> temp; )
		temps.push_back(temp);

	double sum = 0;
	for (double x : temps) sum += x;
	cout << "Average temperature: " << sum / temps.size() << '\n';

	sort(temps.begin(), temps.end());
	if (temps.size() % 2 == 0) {
		cout << "Median temperature: " << (temps[temps.size() / 2] + temps[(temps.size() / 2)-1])/2 << '\n';
	}
	if (temps.size() % 2 != 0) {
		cout << "Median temperature: " << temps[temps.size() / 2] << '\n';
	}
}