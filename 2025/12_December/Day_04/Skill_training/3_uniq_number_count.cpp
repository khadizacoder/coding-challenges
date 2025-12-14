#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<int, int> freq;
    for(auto it : a)
    {
        freq[it]++;
    }

    int cnt = 0;
    for(auto it : freq)
    {
        if(it.second == 1)
            cnt++;
    }

    cout << "Uniq number count = " << cnt << endl;
    return 0;
}