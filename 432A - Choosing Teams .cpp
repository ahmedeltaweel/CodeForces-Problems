//============================================================================
// Author      : Ahmed El-Taweel
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int n, k;

	cin >> n >> k;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int cnt = 0;

	for(int i = 0; i < n; i++)
	    if (5 - a[i] >= k)
	        cnt++;

	int ans = cnt / 3;

	cout << ans;

	return 0;
}
