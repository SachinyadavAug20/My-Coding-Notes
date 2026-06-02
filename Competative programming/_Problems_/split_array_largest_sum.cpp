// https://leetcode.com/problems/split-array-largest-sum/description/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    // minimize sub array 
    // sum can be (max_element(nums),sumofallelements)
    // SOLUTION
    // sum can be (max_element(num),sum(nums))
    // binary search in FFFTTTTTTTT

    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int lo=*max_element(nums.begin(),nums.end()),hi=accumulate(nums.begin(),nums.end(), 0);
        int ans=hi;
        while(hi>=lo){
            int mid=lo+(hi-lo)/2;
            int segmetNeeded=0,sumTillNow=0;
            for(int i=0;i<n;i++){
                if(sumTillNow+nums[i]>mid){
                    segmetNeeded++;
                    sumTillNow=nums[i];
                }else{
                    sumTillNow+=nums[i];
                }
            }
            if(sumTillNow>0) segmetNeeded++;

            if(segmetNeeded<=k){
                hi=mid-1;
                ans=min(ans,mid);
            }else{
                lo=mid+1;
            }
        }
        return ans;
    }
};


