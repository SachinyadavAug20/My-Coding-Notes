// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/submissions/2017323632/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    // need to do in logn 
    // search for minimum element
    // min is to be tracked find -> pivote where not in increasing order
    // to get pivote may need O(n) so can't do that
    // let sorted and right sorted parts are different and need
    // after rotaton
    // left sorted -> always has value greater than right side
    // answer lies in right side
    int findMin(vector<int>& nums) {
        int ans=nums[0];
        int lo=0,hi=nums.size()-1;
        while(hi>=lo){
            if(nums[lo]<nums[hi]){
                // reached sorted range
                ans=min(ans,nums[lo]);
                break;
            }
            int mid=lo+(hi-lo)/2;
            ans=min(ans,nums[mid]);
            if(nums[mid]>=nums[lo]){ // we are on left sorted region go right
                lo=mid+1;
            }else{ // in right region go to left
                hi=mid-1;
            }
        }
        return ans;
    }
};

