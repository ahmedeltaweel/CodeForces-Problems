#include <bits/stdc++.h>
using namespace std;

int getNumberOfStones(int number)
{
}

int main()
{

#ifndef ONLINE_JUDGE
    // freopen("c.in", "r", stdin);
#endif
    long long a , x , y;
    cin >> a >> x >>y;

    if( y%a == 0 )
    {
        cout << -1 << endl;
        return 0;
    }

    int fl = y/a;

    if(fl == 0)
    {
        if( 2*x < a && -a < x*2)
        {
            cout<< 1 <<endl;
        }
        else
        {
            cout << -1 <<endl;
        }
        return 0;
    }

    int nu = (fl+1)/2;
    if(fl %2 == 1)
    {
        if( 2*x < a && -a < x*2)
        {
            cout << 3*nu -1<<endl;
        }
        else
        {
            cout << -1 <<endl;
        }
        return 0;
    }
    else
    {
        if(x > 0 && x < a)
        {

            cout << 3*nu +1<<endl;
        }
        else if (x<0 && x>-a)
        {
            cout<<nu*3<<endl;
        }
        else
        {
            cout << -1 <<endl;
        }
        return 0;
    }

    return 0;
}
