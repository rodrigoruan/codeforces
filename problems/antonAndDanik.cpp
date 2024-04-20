// https://codeforces.com/contest/734/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;

    cin >> n >> s;

    int a = 0, d = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
            a++;
        else
            d++;
    }

    if (a > d)
    {
        cout << "Anton";
    }
    else if (a == d)
    {
        cout << "Friendship";
    }
    else
    {
        cout << "Danik";
    }

    cout << endl;

    return 0;
}