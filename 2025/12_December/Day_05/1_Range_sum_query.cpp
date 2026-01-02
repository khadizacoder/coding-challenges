/*
// Prefix sum Query
// Brute Force Way

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    // int a[n];
    vector <int> v(n + 1);
    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        int sum = 0;
        for(int i = l; i <= r; i++)
        {
            sum = sum+v[i];
        }
        cout << sum << endl;
    }

    return 0;
}
*/

// Optimisation way

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long int> a(n + 1);
    // Taking input
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    // array sorted
    // sort(a.begin(), a.end());

    // Prifix sum array
    vector<long long int> pref(n + 1, 0);
    pref[1] = a[1];
    for (int i = 2; i <= n; i++)
    {
        pref[i] = pref[i - 1] + a[i];
    }

    // Query input
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        if(l == 1)
            cout << pref[r] << endl;
        else
            cout << pref[r] - pref[l - 1] << endl;
    }
}