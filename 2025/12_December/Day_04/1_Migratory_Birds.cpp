/*
? Problem 1 – Counting Birds
* Platform: Hackerrank – Migratory Birds
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = N; j >= 1; j /= 2)
        {
            cout << i << " " << j << endl;
        }
    }
    return 0;
}


