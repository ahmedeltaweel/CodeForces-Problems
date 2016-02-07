#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> v;
    for(int i = 1 ; i <= 8 ; i++)
    {
        string a = string(i , '4') + string(i , '7');
        do{
            stringstream ss(a);
            long long t ;
            ss >> t;
            v.push_back(t);
        }while(next_permutation(a.begin() , a.end()));
    }

    sort(v.begin() , v.end());

    cout << *lower_bound(v.begin() , v.end() , n)<<endl;

    return 0;
}
