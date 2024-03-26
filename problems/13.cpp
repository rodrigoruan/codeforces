// https://codeforces.com/contest/427/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int officers = 0;
    int crimes = 0;

    int x;
    while (n--)
    {
        cin >> x;

        if (x > 0)
        {
            officers += x;
            continue;
        }

        if (x < 0)
        {
            if (abs(x) <= officers)
            {
                officers -= abs(x);
            }
            else
            {
                crimes += (abs(x) - officers);
                officers = 0;
            }

            continue;
        }

        crimes += abs(x);
    }

    cout << crimes << endl;

    return 0;
}