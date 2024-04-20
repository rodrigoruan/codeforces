// https://codeforces.com/contest/231/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int imp = 0;

    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int ans = a + b + c;
        if (ans >= 2)
        {
            imp++;
        }
    }

    cout << imp << endl;

    return 0;
}