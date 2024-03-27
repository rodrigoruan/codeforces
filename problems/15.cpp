// https://codeforces.com/contest/731/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int total = 1;
    int price = a;

    while (((price - b) % 10 != 0) && price % 10 != 0)
    {
        price += a;
        total++;
    }

    cout << total << "\n";

    return 0;
}