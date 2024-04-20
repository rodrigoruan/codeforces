// https://codeforces.com/contest/59/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int lower = 0, upper = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if ((int)s[i] >= 65 && (int)s[i] <= 90)
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }

    string ans = "";

    if (upper > lower)
    {
        for (int i = 0; i < s.size(); i++)
        {
            ans += toupper(s[i]);
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            ans += tolower(s[i]);
        }
    }

    cout << ans << endl;

    return 0;
}