#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int invest = b + c;
    int profit = a - invest;

    cout << profit << endl;

    return 0;
}