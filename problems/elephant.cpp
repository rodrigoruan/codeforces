// https://codeforces.com/problemset/problem/617/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int total = 0;
    while (n > 0)
    {
        n -= 5;
        total++;
    }

    cout << total << "\n";

    return 0;
}