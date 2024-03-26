// https://codeforces.com/contest/381/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> cards = {};

    int card;
    while (n--)
    {
        cin >> card;
        cards.push_back(card);
    }

    int sereja = 0, dima = 0;
    while (cards.size() > 0)
    {
        if (cards[cards.size() - 1] > cards[0])
        {
            sereja += cards[cards.size() - 1];
            cards.erase(cards.end());
        }
        else
        {
            sereja += cards[0];
            cards.erase(cards.begin());
        }

        if (cards.size() == 0)
            continue;

        if (cards[cards.size() - 1] > cards[0])
        {
            dima += cards[cards.size() - 1];
            cards.erase(cards.end());
        }
        else
        {
            dima += cards[0];
            cards.erase(cards.begin());
        }
    }

    cout << sereja << " " << dima << endl;

    return 0;
}