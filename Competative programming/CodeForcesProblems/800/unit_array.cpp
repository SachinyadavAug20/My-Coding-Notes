#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int one = 0, minusOne = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a == -1) minusOne++;
            else one++;
        }

        int ops = 0;

        while (minusOne > one) {
            minusOne--;
            one++;
            ops++;
        }

        if (minusOne % 2 != 0) {
            ops++;
            minusOne--;
            one++;
        }

        cout << ops << endl;
    }
    return 0;
}

