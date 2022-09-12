#include <iostream>
#include <vector>

using namespace std;
int main() {
	vector<int> primes = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
	vector<int> findings;
	for (int i = 2; i < 101; i++) {
		bool prime = true;
		for (int j = 2; j * j <= i; j++) {
			cout << "i: " << i << " j:" << j << endl;
			if (i % j == 0) {
				prime = false;
				break;
			}
		}
		if (prime) {
			findings.push_back(i);
		}
	}

	for (int n : findings) {
		cout << n << endl;
	}

	return 0;
}