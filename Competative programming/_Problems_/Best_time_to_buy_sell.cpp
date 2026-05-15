// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),maxP=0;
        vector<int> postFixMax(n);
        postFixMax[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--){
            postFixMax[i]=max(prices[i],postFixMax[i+1]);
        }
        for(int i=0;i<n-1;i++){
            maxP=max(maxP,postFixMax[i+1]-prices[i]);
        }
        return maxP;
    }
};
