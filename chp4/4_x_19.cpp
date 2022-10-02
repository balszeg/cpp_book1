#include <iostream>
#include <vector>

using namespace std;
int main() {
	vector<string> names;
	vector<int> scores;
	string temp_name;
	int temp_score;

	cout << "Pleas write in the name score pairs: " << endl;
	while (cin >> temp_name >> temp_score) {
		if (temp_name == "NoName" && temp_score == 0) {
			break;
		}

		if (names.size() < 1) {
			names.push_back(temp_name);
			scores.push_back(temp_score);
		}

		else {
			for (string i : names) {
				if (i == temp_name) {
					cout << "The following name was already added: " << temp_name;
					return 1;
				}
			}
			names.push_back(temp_name);
			scores.push_back(temp_score);
		}
	}

	for (int i = 0; i < names.size(); i++) {
		cout << "Name - score: " << names[i] << " " << scores[i] << endl;
	}

	return 0;
}