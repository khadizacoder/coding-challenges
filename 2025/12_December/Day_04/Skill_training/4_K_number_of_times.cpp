#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> freq;
    for(auto it : a)
        freq[it]++;

        int cnt = 0;
    for(auto it : freq)
    {
        if(it.second == k)
            cnt++;
    }

    cout << "K Number of times => " << cnt << endl;
    
    return 0;
}