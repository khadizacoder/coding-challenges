// array ar vitor a 15 ace ki na -> jode array sort kora na thake tahole sort kore nita hobe

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    while (q--)
    {
        int x;
        cin >> x;

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

        (res > 0) ? cout << "Yes => " << res << " available" << endl : cout << "NO => " << res << " not available" << endl;
    }

    return 0;
}
*/

// ✅ BEST Way -2: (STL binary_search ব্যবহার)
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    //array sort
    sort(a.begin(),a.end());

    while (q--)
    {
        int x;
        cin >> x;

        if(binary_search(a.begin(), a.end(), x))
        {
            cout << x << " => Available" << endl;
        }
        else{
            cout << x << " => Not available"<< endl;
        }
    }

    return 0;
}
*/

/*
✅ BEST WAY–3:( unordered_set ব্যবহার) => sort kora lagbe na r unordered_set a kono index nai
⏱ Time Complexity: (unordered_set)
insert() → O(1) (average)
count() → O(1) (average)
find() → O(1) (average)
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    unordered_set<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }

    // print
    // for(int x : a)
    // {
    //     cout << x << " ";
    // }

    while (q--)
    {
        int x;
        cin >> x;
        if(a.count(x))
        {
            cout << "Yes" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}