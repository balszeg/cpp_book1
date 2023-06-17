#include <iostream>

using namespace std;

void error(string s)
{
	throw runtime_error(s);
}

int main() {
	//try {
		double d = 0;
		cout << "Please define a double: " << endl;
		cin >> d;
		if (!cin) error("couldn't read a double in here");
		// our program
		return 0; // 0 indicates success
	//}
	/*/catch (runtime_error& e) {
		cerr << "runtime_error: " << e.what() << '\n';
		return 1; // 1 indicates failure
	}*/
	/*/catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2; // 2 indicates failure
	}*/
}

