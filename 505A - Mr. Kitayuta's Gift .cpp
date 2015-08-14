#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindromes(string input) {

	string sss;
	sss = input;
	reverse(sss.begin(), sss.end());
	if (input == sss) {
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
			data.insert(data.begin() + i, ch);

			if (isPalindromes(data)) {
				cond = true;
				break;
			}

		}
		if (cond)
			break;
	}

	if (cond) {
		cout << data << endl;
	} else {
		cout << "NA" << endl;
	}
	return 0;
}
