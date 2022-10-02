#include <iostream>
#include <vector>

using namespace std;
int main() {
	vector<string> names;
	vector<string> found_names;
	vector<int> scores;
	vector<int> found_scores;
	string temp_name;
	string found_name;
	int temp_score;
	int score_name;

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

	cout << "Please enter a score whose names want to see with it: " << endl;
	cin >> score_name;

	for (int i = 0; i < names.size(); i++) {
		if (scores[i] == score_name) {
			found_names.push_back(names[i]);
			found_scores.push_back(scores[i]);
		}
	}


	if (found_names.size() > 0) {
		for (int j=0; j < found_names.size(); j++) {
			cout << found_names[j] << " has " << found_scores[j] << " scores" << endl;
		}
		
	}
	else {
		cout << "score not found";
		return 1;
	}

	return 0;
}