// https://codeforces.com/contest/9/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int highest = max(a, b);

    int numerator = 7 - highest;
    int denominator = 6;

    for (int i = 6; i >= 1; i--)
    {
        if (numerator % i == 0 && denominator % i == 0)
        {
            numerator = numerator / i;
            denominator = denominator / i;
        }
    }

    cout << numerator << '/' << denominator << "\n";

    return 0;
}