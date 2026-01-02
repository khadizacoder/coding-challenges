/*
Given array and X.
Help to find smallest index where prefix sum >= X.
If not possible print -1.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int x;
    cin >> x;

    vector<int> pre(n + 1);
    pre[1] = a[1];
    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i - 1] + a[i];
    }

    int l = 1, r = n - 1;
    int res = -1;

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (pre[mid] >= x)
        {
            res = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << res;

    return 0;
}