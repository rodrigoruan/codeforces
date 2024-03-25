// https://codeforces.com/contest/263/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int line = 0, row = 1;

    int x = 0;

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

    cout << abs(row - 3) + abs(line - 3) << endl;

    return 0;
}