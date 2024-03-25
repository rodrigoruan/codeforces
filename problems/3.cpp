// https://codeforces.com/contest/791/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int y = 0;

    while (a <= b)
    {
        a = 3 * a;
        b = 2 * b;
        y++;
    }

    cout << y << endl;

    return 0;
}