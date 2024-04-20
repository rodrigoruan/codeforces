// https://codeforces.com/problemset/problem/546/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int k, n, w;
    cin >> k >> n >> w;

    long long int total = k;

    long long sum = k * w * (w + 1) / 2;

    if (sum - n < 0)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << (long long)sum - n << "\n";
    }

    return 0;
}