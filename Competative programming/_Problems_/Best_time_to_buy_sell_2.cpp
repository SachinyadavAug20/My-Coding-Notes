// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/submissions/2003955806/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int totalProfit=0,n=prices.size();
        for(int i=0;i<n-1;i++){
            int prof=prices[i+1]-prices[i];
            if(prof>0){ // uses local maxima
                totalProfit+=prof;
            }
        }
        return totalProfit;
    }
};
