#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
    freopen("c.in" , "r" , stdin);
#endif // ONLINE_JUDGE

    long long  n , m , a ,counter = 0;

    cin >> n >> m >> a;

    counter = ceil((double) n/a) * ceil((double)m/a);

    cout << counter;


    return 0;
}
