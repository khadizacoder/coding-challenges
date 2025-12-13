// ✅ Problem 3: Plus Minus

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // int a[n];
    vector <int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int pos = 0, neg = 0, zero = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            zero++;
        }
        else if (a[i] < 0)
        {
            neg++;
        }
        else
        {
            pos++;
        }
    }
    
    cout << fixed << setprecision(6);
    cout << (double)pos / n << endl;
    cout << (double)neg / n  << endl;
    cout << (double)zero / n  << endl;
    
    return 0;
}