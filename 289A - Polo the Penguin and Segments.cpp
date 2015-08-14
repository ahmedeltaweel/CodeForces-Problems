#include <iostream>

using namespace std;


int n , k ;

int seg1 , seg2  , total = 0;



int main()
{
    #ifndef ONLINE_JUDGE
      //  freopen( "c.in" , "rt" , stdin );
    #endif // ONLINE_JUDGE

    // getting input
    cin >> n >> k;

    for( int i = 0 ; i < n ; i++ )
    {
        cin >> seg1 >> seg2;
        total += seg2 - seg1 + 1;
    }

    total %= k;

    if(total != 0)
    {
        total = k - total;
    }

    cout << total << endl ;


    return 0;
}
