// Chef and Segments
//
// Chef likes toys. His favourite toy is an array of length N. This array contains only integers. He plays with this array every day. His favourite game with this array is Segment Multiplication. In this game, the second player tells the left and right side of a segment and some modulo. The first player should find the multiplication of all the integers in this segment of the array modulo the given modulus. Chef is playing this game. Of course, he is the first player and wants to win all the games. To win any game he should write the correct answer for each segment. Although Chef is very clever, he has no time to play games. Hence he asks you to help him. Write the program that solves this problem.
// Input
//
// The first line of the input contains an integer N denoting the number of elements in the given array. Next line contains N integers Ai separated with spaces. The third line contains the number of games T. Each of the next T lines contain 3 integers Li, Ri and Mi, the left side of the segment, the right side of segment and the modulo.
// Output
//
// For each game, output a single line containing the answer for the respective segment.
// Constrdaints
//
//     1 ≤ N ≤ 100,000
//     1 ≤ Ai ≤ 100
//     1 ≤ T ≤ 100,000
//     1 ≤ Li ≤ Ri ≤ N
//     1 ≤ Mi ≤ 109
#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
#define ll long long

// fast exponentiation
ll binExpo(ll a, ll b, ll m) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

int main() {

    // Step 1: smallest prime factor (hp)
    vector<int> hp(101);
    for (int i = 0; i <= 100; i++) hp[i] = i;

    for (int i = 2; i <= 100; i++) {
        if (hp[i] == i) {
            for (int j = i * 2; j <= 100; j += i) {
                if (hp[j] == j) hp[j] = i;
            }
        }
    }

    // Step 2: list of primes
    vector<int> primes;
    for (int i = 2; i <= 100; i++) {
        if (hp[i] == i) primes.push_back(i);
    }

    int P = primes.size(); // ~25

    // map prime → index
    map<int, int> idx;
    for (int i = 0; i < P; i++) {
        idx[primes[i]] = i;
    }

    // Step 3: input
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    // Step 4: prefix array
    vector<vector<int>> prefix(n, vector<int>(P, 0));

    for (int i = 0; i < n; i++) {
        if (i > 0) prefix[i] = prefix[i-1];

        int x = arr[i];
        while (x > 1) {
            int p = hp[x];
            prefix[i][idx[p]]++;
            x /= p;
        }
    }

    // Step 5: queries
    int t;
    cin >> t;
    while (t--) {
        int L, R, M;
        cin >> L >> R >> M;
        L--; R--;

        ll ans = 1;

        for (int i = 0; i < P; i++) {
            int cnt = prefix[R][i];
            if (L > 0) cnt -= prefix[L-1][i];

            if (cnt > 0) {
                ans = (ans * binExpo(primes[i], cnt, M)) % M;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
