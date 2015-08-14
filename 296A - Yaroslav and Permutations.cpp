#include <iostream>
#include <algorithm>

using namespace std;



int main()
{

#ifndef ONLINE_JUDGE
    freopen("c.in", "rt", stdin);
#endif

    int arr[100];
    int n ;
    cin >> n;

    bool valid = true;


    for( int i = 0 ; i < n ; i++ )
        cin >> arr[i];


    for(int i = 0 ; i < n ; i++)
    {
        int c = 0;
        for(int j = 0 ; j < n ; j++)
        {
            if(arr[i] == arr[j])
                c++;
        }

        if(n < 2*c -1)
        {
            valid = false;
            break;

        }
    }

    if(valid)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
