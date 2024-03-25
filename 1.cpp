// https://codeforces.com/contest/677/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;

    int ans = 0;

    while (n--)
    {
        int x;
        cin >> x;

        if (x > h)
        {
            ans += 2;
        }
        else
        {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}