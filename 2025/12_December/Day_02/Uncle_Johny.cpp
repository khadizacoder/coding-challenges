// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         int k;
//         cin >> k;

//         int target = a[k-1];

//         sort(a, a + n);
//         int res = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if(a[i] == target)
//             {
//                 res = i + 1;
//                 break;
//             }
//         }
//         cout << res << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int k;
        cin >> k;

        int terget = a[k - 1];
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == terget)
            {
                cout <<  i + 1 << endl;
                break;
            }
        }
    }
}