/** *******************
* Ahmed El-Taweel
* ahmed.m.eltaweel@gmail.com
*********************************/

#include <iostream>
#include <string>

using namespace std;

string a;
string b;
string c;
int main() {
	cin >> a >> b;
	c = a;
	for (int i = a.size() - 1; i >= 0; i--) {
		if (c[i] == 'z')
			c[i] -= 25;
		else {
			c[i]++;
			break;
		}
	}
	int flag = 0;
	for (int i = 0; i < a.size(); i++) {
		if (c[i] < b[i]) {
			flag = 1;
			break;
		}
		if (c[i] > b[i]) {
			flag = 0;
			break;
		}
	}
	if (flag == 0)
		cout << "No such string" << endl;
	else
		cout << c << endl;

	return 0;
}
