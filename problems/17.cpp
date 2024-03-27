// https://codeforces.com/contest/265/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string stoneLiss, a;
    cin >> stoneLiss >> a;

    int move = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == stoneLiss[move])
        {
            move++;
        }
    }

    cout << move + 1 << "\n";

    return 0;
}