// https://leetcode.com/contest/biweekly-contest-184/problems/exactly-one-consecutive-set-bits-pair/description/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    bool consecutiveSetBits(int n) {
        int pairs = n & (n >> 1); 
        // no of set bit here is no of pairs
        int count = 0;
        while (pairs) {
            count += pairs & 1;
            pairs >>= 1;
        }
        return count == 1;
    }
};
