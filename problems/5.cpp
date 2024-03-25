// https://codeforces.com/contest/263/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int line = 0, row = 1;

    int x;

    while (x != 1)
    {
        if (line == 5)
        {
            row++;
            line = 0;
        }

        cin >> x;
        line++;
    }

    cout << abs(3 - row) + abs(3 - line) << endl;

    return 0;
}