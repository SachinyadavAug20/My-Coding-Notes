#include <bits/stdc++.h>
#include <climits>
using namespace std;
#define ll long long

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int ans=nums[0];
        int sum=0;
        for(int r=0;r<n;r++){
            if(sum<0)sum=0;
            sum+=nums[r];
            ans=max(ans,sum);
        }
        return ans;
    }
};
