#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> freq;

    for (int i = 0; i < n; i++)
        freq[a[i]]++;

    int mx = freq[0], num;

    for (auto it : freq)
    {
        if(it.second > mx)
        {
            mx = it.second;
            num = it.first;
        }
    }

    cout << "Number = " << num << ", Count = " << mx << endl;
    
    return 0;
}