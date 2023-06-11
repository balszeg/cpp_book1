#include <iostream>

// Pelda mondat: She she laughed He He He because what he did did not look very very good good.

using namespace std;
int main()
{
	string previous = " "; // previous word; initialized to “not a word”
	string current; // current word
	while (cin >> current) { // read a stream of words
		if (previous == current) // check if the word is the same as last
			cout << "repeated word: " << current << '\n';
		previous = current;
	}
}