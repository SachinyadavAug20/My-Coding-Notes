#include <bits/stdc++.h>
using namespace std;

#define fastio() (ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr))
#define endl '\n'
#define int long long

// obs
// 3 cases
// 1. X = b: The XOR is already b, so no extra elements are needed. Answer: a
// 2. X!=b and X XOR a != a: Append the single element X XOR b to fix the XOR without changing the MEX. Answer: a + 1.
// 3. X!=b and X XOR a == a: You can't append a (it would break the MEX), so split a into two numbers whose XOR is a (like a XOR 1 and 1). Answer: a + 2

int prefix_xor(int n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}

void solve() {
    int a, b;
    cin >> a >> b;
    int x = prefix_xor(a - 1);
    if (x == b) {
        cout << a << endl;
    } else if ((x ^ b) != a) {
        cout << a + 1 << endl;
    } else {
        cout << a + 2 << endl;
    }
}

signed main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
