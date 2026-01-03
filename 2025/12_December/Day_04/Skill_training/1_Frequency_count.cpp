#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<int, int> freq;

    // frequency count
    for (auto it : a)
    {
        freq[it]++;
    }

    // print frequency
    for (auto it : freq)
    {
        cout << it.first << " এসেছে " << it.second << " বার " << endl;
    }
    return 0;
}

