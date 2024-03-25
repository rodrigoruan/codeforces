// https://codeforces.com/contest/1926

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >> a;

    while (a--)
    {
        string c;
        cin >> c;

        int a = 0, b = 0;

        for (int i = 0; i < c.size(); i++)
        {
            if (c[i] == 'A')
                a++;
            else
                b++;
        }

        if (a > b)
        {
            cout << 'A' << endl;
        }
        else
        {
            cout << 'B' << endl;
        }
    }

    return 0;
}