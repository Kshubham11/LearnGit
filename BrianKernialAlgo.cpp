#include <bits/stdc++.h>
using namespace std;
// #define nline "\n"
int main()
{
    int n;
    cin >> n;
    int count = 0;
    int ans = __builtin_popcount(n);
    cout << ans << endl;

    while (n)
    {
        // BrianKernial's Algorithm
        n = n & (n - 1);
        count++;
    }
    cout << count << endl;
    // cout<<(__builtin_popcount(n))<<nli
    // ne;

    return 0;
}