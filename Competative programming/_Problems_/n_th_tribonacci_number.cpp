#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define ll long long

class Solution {
public:
    unordered_map<int, int> dp={{0,0},{1,1},{2,1}};
    int tribonacci(int n) {
        if(dp.find(n)!=dp.end()) return dp[n];
        int v=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
        dp[n]=v;
        return v;
    }
};
