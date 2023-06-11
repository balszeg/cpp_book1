#include <iostream>
#include <vector>

using namespace std;
int main() {
	vector<int> inputs;
	int temp;

	cout << "Please give 3 random integers: " << endl;
	while (inputs.size() < 3) {
		cin >> temp;
		inputs.push_back(temp);
	}

	char p_choice = ' ';
	char m_choice = ' ';
	int win_counter = 0;
	for (int i = 0; i < 3; ++i) {
		cout << "State your choice (r/p/s): " << endl;
		cin >> p_choice;

		if (inputs[i] % 2 == 0) {
			m_choice = 'r';
		}

		if (inputs[i] % 2 != 0) {
			m_choice = 'p';
		}

		if (inputs[i] % 2 == 0 && inputs[i] % 3 == 0) {
			m_choice = 's';
		}

		switch (p_choice) {
		case 'r':
			switch (m_choice) {
			case 'r':
				cout << "Rock vs rock - draw" << endl;
				break;
			case 'p':
				cout << "Rock vs paper - machine wins" << endl;
				break;
			case 's':
				cout << "Rock vs scissor - player wins" << endl;
				win_counter += 1;
				break;
			}
			break;
		case 'p':
			switch (m_choice) {
			case 'r':
				cout << "Paper vs rock - player wins" << endl;
				win_counter += 1;
				break;
			case 'p':
				cout << "Paper vs paper - draw" << endl;
				break;
			case 's':
				cout << "Paper vs scissor - machine wins" << endl;
				break;
			}
			break;
		case 's':
			switch (m_choice) {
			case 'r':
				cout << "Scissor vs rock - machine wins" << endl;
				break;
			case 'p':
				cout << "Scissor vs paper - player wins" << endl;
				win_counter += 1;
				break;
			case 's':
				cout << "Scissor vs scissor - draw" << endl;
				break;
			}
			break;
		}
	}

	if (win_counter >= 2) {
		cout << "Congratulation! You won! (" << win_counter << "/3)" << endl;
	}
	if (win_counter < 2) {
		cout << "Better luck next time! Machine won! (" << win_counter << " / 3)"  << endl;
	}

	return 0;
}