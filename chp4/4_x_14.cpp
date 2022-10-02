#include <iostream>
#include <vector>

using namespace std;
int main() {
	vector<int> primes;
	vector<int> numbers;
	int p = 2;
	int limit;

	cout << "Please, provide a limit number: " << endl;
	cin >> limit;

	for (int i = 2; i < (limit + 1); i++) {
		numbers.push_back(i);
	}

	while (p < (limit + 1)) {
		primes.push_back(p);
		vector<int> temp;
		for (int i : numbers) {
			if (i % p == 0) {
				continue;
			}
			temp.push_back(i);
		}

		if (temp.size() == 0) {
			break;
		}

		p = temp[0];
		numbers = temp;

	}

	cout << "Primes: " << endl;

	for (int i : primes) {
		cout << i << endl;
	}

	return 0;
}
