#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("c.in", "r", stdin);
#endif

    int a , b ,c ,x ,y ,z;

    while(scanf("%d %d %d" , &a , &b , &c) != EOF){
        scanf("%d %d %d" , &x , &y, &z);

        a-= x; b-= y ; c-=z;
        if(a > 0)
            a /= 2;
        if(b > 0)
            b /= 2;
        if(c > 0)
            c /= 2;

        printf((a+b+c >= 0) ? "Yes" : "No");

    }
    return 0;
}
