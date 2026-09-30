#include <bits/stdc++.h>
using namespace std;

#define fastio() (ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr))
#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define int long long

// obs
// need to make take integer from 1 to n
// using exactly k element => can make 
// min = 1+2+...+k = k(k+1)/2
// max = n+(n-1)+...+(n-k) = k(2n-k+1)/2
// any number between min and max is formable

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;

        long long minSum = k * (k + 1) / 2;
        long long maxSum = k * (2 * n - k + 1) / 2;

        if (minSum <= x && x <= maxSum)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
