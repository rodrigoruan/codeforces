// https://codeforces.com/contest/112/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string first, second;
    cin >> first >> second;

    for (int i = 0; i < first.size(); i++)
    {
        if (tolower(first[i]) < tolower(second[i]))
        {
            cout << "-1" << endl;
            return 0;
        }
        else if (tolower(first[i]) > tolower(second[i]))
        {
            cout << '1' << endl;
            return 0;
        }
    }

    cout << '0' << endl;

    return 0;
}