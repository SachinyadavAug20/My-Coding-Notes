// https://leetcode.com/problems/minimum-size-subarray-sum/description/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    // to find sum to target by smallest sz
    // can find by sliding window
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        vector<int> preSum(n),postSum(n);
        preSum[0]=nums[0];
        for(int i=1;i<n;i++){
            preSum[i]=preSum[i-1]+nums[i];
        }

        int ans=INT_MAX;
        int l=0;
        for(int i=0;i<n && l<n;i++){
            int lsum=l-1>=0?preSum[l-1]:0;
            int rsum=preSum[i];

            int wSum=rsum-lsum;
            int ww=i+1-l;
            if(wSum>=target){ // valid be greedy
              ans=min(ans,ww);
              // shrink
                l++;
                i--;

            }  
        }
        return ans==INT_MAX?0:ans;
    }
};


