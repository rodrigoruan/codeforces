// https://codeforces.com/contest/268/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    map<int, pair<int, int>> c;

    cin >> n;

    int a, b;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        c[i] = make_pair(a, b);
    }

    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                continue;

            if (c[i].first == c[j].second)
            {
                total++;
            }
        }
    }

    cout << total << "\n";

    return 0;
}
