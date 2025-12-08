#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int max = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '4')
            {
                max = max + 1;
            }
        }
        cout << max << endl;
    }

    return 0;
}