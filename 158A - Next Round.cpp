/** *******************
* Ahmed El-Taweel
* ahmed.m.eltaweel@gmail.com
*********************************/

#include <iostream>
#include <map>

using namespace std;



int main()
{

#ifndef ONLINE_JUDGE
    freopen("c.in", "rt", stdin);
#endif

    int arr[50];
    int n , k;
    int counter;

    cin >> n >> k ;

    for (int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }

    k = arr[k-1];

    for (int i = 0 ; i < n ; i++)
    {
        if(arr[i] >= k && arr[i] > 0)
            counter++;
    }

    cout << counter;


    return 0;
}
