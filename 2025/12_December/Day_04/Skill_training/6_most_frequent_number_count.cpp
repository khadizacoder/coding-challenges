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
    for(int x : a){
        freq[x]++;
    }

    int count = 0;
    for(auto it : freq)
    {
        count = max(count, it.second);
    }

    cout << count << endl;
    
    return 0;
}