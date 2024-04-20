// https://codeforces.com/problemset/problem/69/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = 0, y = 0, z = 0;

    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }

    if (!x && !y && !z)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}