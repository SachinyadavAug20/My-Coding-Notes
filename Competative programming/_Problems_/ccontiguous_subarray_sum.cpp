// https://leetcode.com/problems/subarray-sum-equals-k/description/
// https://leetcode.com/problems/subarray-sum-equals-k/

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define ll long long

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ctn=0,n=nums.size(),prefix_sum=0;
        unordered_map<int, int> hsh;  // prefix:count
        hsh[0]++;
        for(int i=0;i<n;i++){
            int num=nums[i];
            prefix_sum+=num;
            if(hsh[prefix_sum-k]){
                ctn+=hsh[prefix_sum-k];
            }
            hsh[prefix_sum]++;
        }
        return ctn;
    }// O(N)
};
