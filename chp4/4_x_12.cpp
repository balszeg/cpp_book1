#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
int main() {
	int max;
	cout << "Please declare a max limit: " << endl;
	cin >> max;

	vector<int> primes = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
	vector<int> findings;
	for (int i = 1; i < max; ++i) {
		for (int j = 2; j <= i; ++j) {
			if (i % j == 0) {
				findings.push_back(j);
				break;
			}
		}
	}

	sort(findings.begin(), findings.end());
	findings.erase(unique(findings.begin(), findings.end()), findings.end());

	for (int n : findings) {
		cout << n << endl;
	}

	return 0;
}