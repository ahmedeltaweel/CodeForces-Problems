#include <bits/stdc++.h>
using namespace std;

string colors = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main()
{

#ifndef ONLINE_JUDGE
   // freopen("c.in", "r", stdin);
#endif
    int  n , k;
    cin >> n >> k;
    string paint ;
    cin >> paint;
    int counter1 = 0 , counter2=0;;
    if(k == 2)
    {
        string a;
        string b;
        for(int i = 0 ; i < n ; i++)
        {
            if(i%2 == 0)
            {
                a+='A';
                b+='B';
            }
            else
            {
                a+='B';
                b+='A';
            }
        }
        for(int i = 0 ; i < n ; i++)
        {
            if(paint[i] != a[i])
            {
                counter1 ++;
            }
            else
            {
                counter2++;
            }
        }
        if(counter1 > counter2)
        {
            cout << counter2<<endl;
            cout << b << endl;
        }
        else
        {
            cout << counter1<<endl;
            cout << a << endl;
        }
    }
    else
    {
        counter1 = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if(paint[i]==paint[i+1])
            {
                if(paint[i+1] == paint[i+2])
                {
                    for(int j = 0 ; j < k ; j++)
                    {
                        if(colors[j] != paint[i] && colors[j] != paint[i+2])
                        {
                            paint[i+1] = colors[j];
                            counter1++;
                            break;
                        }
                    }
                }
                else
                {
                    for(int j = 0 ; j < k ; j++)
                    {
                        if(colors[j] != paint[i+1] && colors[j] != paint[i-1])
                        {
                            paint[i] = colors[j];
                            counter1++;
                            break;
                        }
                    }
                }
            }
        }
        cout << counter1 <<endl;
        cout << paint << endl;
    }


    return 0;
}
