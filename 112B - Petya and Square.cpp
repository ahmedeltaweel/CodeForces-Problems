#include <bits/stdc++.h>

using namespace std;

bool solve(int n , int x , int y)
{
    n /= 2;
    if((n == x || n == x - 1) && (n == y || n == y - 1))
        return false;
    else
        return true;
}

int main()
{
#ifndef ONLINE_JUDGE
    //freopen("c.in", "r", stdin);
#endif

    int n , x , y ;
    while(cin >> n >> x >> y)
    {
        if(solve(n , x , y)){
            cout << "YES"<<endl;
        }else{
            cout << "NO"<< endl;
        }
    }
    return 0;
}
