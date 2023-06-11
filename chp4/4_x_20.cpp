#include <iostream>
#include <vector>

using namespace std;
int main() {
	vector<string> names;
	vector<int> scores;
	string temp_name;
	string score_name;
	string found_name;
	int temp_score;
	int found_score;

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

	cout << "Please enter a name whose score yout want: " << endl;
	cin >> score_name;
	
	for (int i = 0; i < names.size(); i++) {
		if (names[i] == score_name) {
			found_name = names[i];
			found_score = scores[i];
		}
	}

	if (found_name != "") {
		cout << found_name << " has " << found_score << " scores" << endl;
	}
	else {
		cout << "name not found";
		return 1;
	}

	return 0;
}