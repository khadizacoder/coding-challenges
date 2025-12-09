#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;

        long long int height = 0;
        long long int sum = 0;

        while (sum + (height + 1) <= n )
        {
            height++;
            sum+=height;
        }
        
        cout << height << endl;
    }
    
    return 0;
}