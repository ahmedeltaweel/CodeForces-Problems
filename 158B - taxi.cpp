#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <cassert>

using namespace std;

int solve( vector<int> vec )
{
    int number = 0;
    number += vec[4];
    number += vec[3];
    vec[1] -= vec[3];

    number += (vec[2] /2) + (vec[2] % 2);
    vec[1] -= 2 * (vec[2] % 2);

    if(vec[1] >0)
        number+= (vec[1] / 4) + (vec[1]%4 > 0);

    return number;
}

int main()
{
   // freopen( "input.txt", "r", stdin );

    int n ;
    cin >> n;
    vector<int> vec(5,0);

    for(int i = 0 ; i < n ; i++)
    {
        int x ;
        cin >> x;
        vec[x]++;
    }

    cout << solve(vec) << endl;

}
