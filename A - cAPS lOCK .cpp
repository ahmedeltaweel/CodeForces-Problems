/********************************
* Ahmed El-Taweel
* ahmed.m.eltaweel@gmail.com
*********************************/

#include <iostream>

using namespace std;

bool isCorrect(string str)
{
    int cnt = 0 ;

    if(isupper(str[0]))
        cnt++;

    for(int i = 1 ; i < str.length() ; i++ )
    {
        if(islower(str[i]))
            cnt++;
    }

    if(cnt == str.length())
        return true;
    else
        return false;
}

bool isApplied1(string str)
{
    int cnt = 0 ;

    if(islower(str[0]))
        cnt++;

    for(int i = 1 ; i < str.length() ; i++ )
    {
        if(isupper(str[i]))
            cnt++;
    }

    if(cnt == str.length())
        return true;
    else
        return false;
}

bool isApplied2(string str)
{
    int cnt = 0 ;

    for(int i = 0 ; i < str.length() ; i++ )
    {
        if(isupper(str[i]))
            cnt++;
    }

    if(cnt == str.length())
        return true;
    else
        return false;
}

bool isApplied3(string str)
{


    if(isupper(str[0]))
        return true;
    else
        return false;
}

bool isApplied4(string str)
{


    if(islower(str[0]))
        return true;
    else
        return false;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("c.in", "rt", stdin);
#endif

    string inpt;

    cin >> inpt;

    if(inpt.length() == 1)
    {
        if(isApplied3(inpt))
            cout<<(char)tolower(inpt[0]);
        else if(isApplied4(inpt))
            cout<<(char)toupper(inpt[0]);
        return 0;
    }

    if(isCorrect(inpt))
    {
        cout << inpt;
        return 0 ;
    }


    if(isApplied1(inpt))
    {
        if(islower(inpt[0]))
            inpt[0]=toupper(inpt[0]);

        for(int i = 1 ; i < inpt.length() ; i++ )
        {
            inpt[i]=tolower(inpt[i]);
        }

        cout << inpt;
        return 0 ;
    }


    if(isApplied2(inpt))
    {

        for(int i = 0 ; i < inpt.length() ; i++ )
        {

            inpt[i]=tolower(inpt[i]);
        }

        cout << inpt;
        return 0 ;
    }
    else
    {

        cout << inpt;
    }

}
