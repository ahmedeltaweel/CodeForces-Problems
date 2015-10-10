#include <iostream>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    //freopen("c.in", "rt", stdin);
#endif // ONLINE_JUDGE

    int n, t;

    cin >> n >> t;

    if (t < 10) {
        for (int i = 0; i < n; i++) {
            cout << t;
        }
    } else {
        if (n >=2 && n % 2 == 0) {
            for (int i = 0; i < n / 2; i++) {
                cout << t;
            }
        } else if (n >= 2 && n % 2 != 0) {
            cout << 1;
            for (int i = 0; i < n/2 ; i++) {
                cout << t;
            }

        }
        else {
            cout << -1;
        }
    }

    return 0;
}
