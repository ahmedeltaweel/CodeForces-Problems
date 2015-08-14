#include <iostream>

using namespace std;



char input[4][4];

// test for 2 * 2 square
bool testElement( int i , int j )
{
    if( i + 1 >= 4 || j + 1 >= 4 ) // do not access outside array
        return false;

    return input[i][j] == input[i][j+1] && input[i][j] == input[i+1][j] && input[i][j] == input[i+1][j+1];
}


//iterating throw each element
bool test ()
{
    for( int i = 0 ; i < 4 ; i++ )
    {
        for( int j = 0 ; j < 4 ; j++ )
        {
            if(testElement(i,j))
                return true;
        }
    }
    return false;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("c.in", "rt", stdin);
#endif



    //getting input
    for( int i = 0 ; i < 4 ; i++ )
    {
        for( int j = 0 ; j < 4 ; j++ )
        {
            cin >> input[i][j];
        }
    }

    bool weDidIt = test();

     for( int i = 0 ; i < 4 ; i++ )
    {
        for( int j = 0 ; j < 4 ; j++ )
        {
            //place Holder
            char original = input[i][j];

            //Do fliping
            if( input [i][j] == '.' )
            {
                input [i][j] = '#';
            }
            else
            {
                input [i][j] = '.';
            }

            if(test())
                weDidIt = true;

            input[i][j] = original;
        }
    }


    if(weDidIt)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;


    return 0;
}
