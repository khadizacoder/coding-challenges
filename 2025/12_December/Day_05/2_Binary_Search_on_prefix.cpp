// array ar vitor a 15 ace ki na -> jode array sort kora na thake tahole sort kore nita hobe

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int x;
    cin >> x;

    sort(a.begin(), a.end());

    int l = 0, r = n - 1;
    int res = -1;
    while (l <= r)
    {

        int mid = (l + r) / 2;

        if (a[mid] == x)
        {
            res = a[mid];
            break;
        }
        else if (a[mid] > x)
        {
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    (res > 0) ?
        cout << "Yes => " << res << " available": cout << "NO => " << res << " not available";

    return 0;
}