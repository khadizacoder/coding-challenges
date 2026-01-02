/*
Given array of N elements and Q queries.
Each query: l r
Print sum from l to r.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    // pre array
    vector<int> pref(n + 1, 0);
    pref[1] = a[1];

    for (int i = 2; i <= n; i++)
        pref[i] = pref[i - 1] + a[i];

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        if (l == 1)
            cout << pref[r] << endl;
        else
            cout << pref[r] - pref[l - 1] << endl;
    }

    return 0;
}