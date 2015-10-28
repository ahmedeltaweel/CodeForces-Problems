#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <sstream>

using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
    freopen("c.in" , "rt" , stdin);
#endif // ONLINE_JUDGE


    int s , t , q , counter = 0;

    cin>> t >> s >> q;



    while(t - s > 0)
    {
        s += (s * (q-1));
        counter++;
    }

    cout << counter << endl;

    return 0;
}
