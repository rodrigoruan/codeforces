// https://codeforces.com/contest/236/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string c;
    cin >> c;

    set<char> vals = {};

    for (int i = 0; i < c.size(); i++)
    {
        vals.insert(c[i]);
    }

    if (vals.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}