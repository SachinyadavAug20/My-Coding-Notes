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
// same as CF https://codeforces.com/problemset/problem/1690/D

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int white_count = 0;
        for (int i = 0; i < k; i++) {
            if (blocks[i] == 'W') {
                white_count++;
            }
        }
        int min_recolors = white_count;
        for (int i = k; i < blocks.size(); i++) {
            if (blocks[i] == 'W') {
                white_count++;
            }
            if (blocks[i - k] == 'W') {
                white_count--;
            }
            min_recolors = min(min_recolors, white_count);
        }
        return min_recolors;
    }
};
