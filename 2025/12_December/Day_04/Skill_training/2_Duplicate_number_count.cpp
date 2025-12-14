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
    {
        freq[it]++;
    }

    int count = 0;
    for(auto it : freq)
    {
        if(it.second > 1)
            count++;
    }

    cout << "Duplicate number count = " << count << endl;
    
    return 0;
}