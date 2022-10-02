#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
int main() {
	int n_of_primes;
	cout << "Please declare a how many primes do you want to calculate: " << endl;
	cin >> n_of_primes;
	cout << endl;
	int i = 1;

	vector<int> findings;

	while(findings.size() < n_of_primes) {
		for (int j = 2; j <= i; ++j) {
			if (i % j == 0) {
				findings.push_back(j);
				break;
			}
		}
		sort(findings.begin(), findings.end());
		findings.erase(unique(findings.begin(), findings.end()), findings.end());
		++i;
	}


	for (int n : findings) {
		cout << n << endl;
	}

	return 0;
}