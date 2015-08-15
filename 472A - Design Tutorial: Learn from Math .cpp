/** *******************
* Ahmed El-Taweel
* ahmed.m.eltaweel@gmail.com
*********************************/

#include <iostream>
using namespace std;

int main() {

	int x;

	cin >> x;

	if (x % 2) {
		cout<<"9 "<<(x-9)<<endl;
	}else{
		cout<<"4 "<<(x-4)<<endl;
	}
	return 0;
}
