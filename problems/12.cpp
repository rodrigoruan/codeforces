// https://codeforces.com/contest/266/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    n--;

    char last;
    char actual;
    cin >> last;

    int removed = 0;

    while (n--)
    {
        cin >> actual;

        if (actual == last)
        {
            removed++;
        }
        else
        {
            last = actual;
        }
    }

    cout << removed << endl;

    return 0;
}