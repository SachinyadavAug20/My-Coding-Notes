#include <bits/stdc++.h>
#include <unordered_map>
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
// form k non-empty palindromes using all characters of string s, two conditions
// 1. Enough characters: You need at least k characters
// 2. Odd-frequency characters: Each palindrome can have at most one character with an odd frequency (placed right in the middle). Therefore, the total number of characters in s with an odd count cannot exceed k

class Solution {
public:
    bool canConstruct(string s, int k) {
        if (s.length() < k) return false;
        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }
        
        int oddCount = 0;
        for (int count : freq) {
            if (count % 2 != 0) {
                oddCount++;
            }
        }
        
        return oddCount <= k;
    }
};
