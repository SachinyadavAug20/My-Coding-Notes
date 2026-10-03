#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

// obs
// no need to find the interval need only size => as may multiple segments for
// it all elements should divisible n need a O(1)/O(logn) solution for it for
// any range it will be of the form 1, 2, 3 ,... , n-1
//

int main() {
  long long t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    long long i = 1;
    while (n % i == 0) i++;
    cout << i - 1 << endl;
  }
}
