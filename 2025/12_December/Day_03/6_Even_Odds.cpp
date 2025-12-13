// ✅ Problem 6: Even Odds

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;

    long long oddCount = (n + 1) / 2;

    if (k <= oddCount)
        cout << 2*k - 1 << endl;
    else
        cout << 2*(k - oddCount) << endl;

    return 0;
}

//* Even count
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long evenCount = n / 2;

    if (k <= evenCount) {
        cout << 2 * k << endl;
    } else {
        cout << 2 * (k - evenCount) - 1 << endl;
    }

    return 0;
}
*/