// ✅ Problem 2: Mini-Max Sum

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    int mx = max({a, b, c, d, e});
    int mn = min({a, b, c, d, e});

    int mxSum = ((long long) a+b+c+d+e) - mn;
    int mnSum = ((long long) a+b+c+d+e) - mx;

    cout << mnSum << " " << mxSum << endl;

    return 0;
}