// https://codeforces.com/contest/431/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    map<char, int> vl = {};
    vl['1'] = a;
    vl['2'] = b;
    vl['3'] = c;
    vl['4'] = d;

    string s;
    cin >> s;

    int cals = 0;

    for (int i = 0; i < s.size(); i++)
    {
        cals += vl[s[i]];
    }

    cout << cals << "\n";

    return 0;
}