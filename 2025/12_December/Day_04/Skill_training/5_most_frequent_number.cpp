#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> freq;

    for(auto it : a)
        freq[it]++;

    int mx = freq[0];
    for(auto it : freq)
    {
        mx = max(mx, it.first);
    }

    cout << "Most frequent number => " << mx << endl;
    
    return 0;
}