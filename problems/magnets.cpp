// https://codeforces.com/contest/344/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string last = "";
    string ac;
    int total = 1;

    while (n--)
    {
        cin >> ac;

        if (ac[0] == last[1])
        {
            total++;
        }

        last = ac;
    }

    cout << total << endl;

    return 0;
}
