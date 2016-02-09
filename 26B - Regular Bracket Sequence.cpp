#include <bits/stdc++.h>
using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
    //freopen("c.in", "r", stdin);
#endif
    string n ;
    cin >> n;
    bool cond = false;
    int counter1 = 0 , counter2=0;

    if(n.length() <= 1)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0 ; i < n.length() ; i++)
    {

        if(n[i] == '(')
        {
            counter1++;
        }
        else
        {
            if(counter1 == 0)
            {
                continue;
            }
            counter1--;
            counter2++;

        }

    }
    cout <<2*counter2 <<endl;

    return 0;
}
