#include <iostream>

using namespace std;




int main()
{
#ifndef ONLINE_JUDGE
    freopen("c.in", "rt", stdin);
#endif


    int n , m ;

    int wireNo , birdNo;

    cin >> n;

    int noBirds[n];

    for( int i = 0 ; i < n ; i++ )
    {
        cin >> noBirds[i];
    }

    cin >> m;

    for(int i = 0 ; i < m ; i++)
    {
        cin >> wireNo >> birdNo;

        if(wireNo == n )
        {
            noBirds[wireNo - 2] +=  birdNo -1;
            noBirds[wireNo - 1] = 0;
        }
        else if (wireNo - 1 == 0)
        {
            noBirds[wireNo] +=  noBirds[wireNo - 1] - birdNo ;
            noBirds[wireNo - 1] = 0;

        }
        else
        {

            //noBirds[wireNo - 2] +=  noBirds[wireNo - 1] - birdNo -1;
            noBirds[wireNo - 2] +=  birdNo -1;
            noBirds[wireNo] +=  noBirds[wireNo - 1] - birdNo ;

            noBirds[wireNo - 1] = 0;
        }
    }

    for (int i = 0 ; i < n ; i++)
        cout << noBirds[i] << endl;



    return 0;
}
