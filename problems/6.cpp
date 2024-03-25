// https://codeforces.com/contest/405/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> vals = {};
    int x = 0;

    while (n--)
    {
        cin >> x;
        vals.push_back(x);
    }

    for (int i = vals.size() - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (vals[j] > vals[i])
            {
                int s = (vals[j] - vals[i]);
                vals[i] += s;
                vals[j] -= s;
            }
        }
    }

    for (int i = 0; i < vals.size(); i++)
    {
        cout << vals[i];
        if (i + 1 != vals.size())
            cout << " ";
    }
    cout << endl;

    return 0;
}