// https://codeforces.com/contest/228/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    set<int> vl = {};
    vl.insert(a);
    vl.insert(b);
    vl.insert(c);
    vl.insert(d);

    cout << 4 - vl.size();

    return 0;
}