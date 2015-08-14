#include <iostream>
#include <string>

using namespace std;

bool isPalindromes(string input) {

	if (input == string(input.rbegin(), input.rend())) {
		return true;
	} else {
		return false;
	}

}

int main() {

	string sString;
	cin >> sString;
	string data = sString;
	bool cond = false;

	for (unsigned int i = 0; i <= sString.length(); i++) {

		for (char ch = 'a'; ch <= 'z'; ch++) {

			data = sString;
			data.insert(data.begin()+i, ch);


			if (isPalindromes(data)) {
				cond = true;
				break;
			}

		}
	}

	if (cond) {
		cout << data << endl;
	} else {
		cout << "NA" << endl;
	}
	return 0;
}
