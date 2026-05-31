// https://leetcode.com/problems/search-in-rotated-sorted-array-ii/submissions/2018273569/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
        // non-decreasing order -> complex
    // need to know in left(lo<mid) and right portion
    // if repeated it wll be hard to say where we are.
    // can't element thing out. => O(n)  worst case
    // because lo==mid
    bool search(vector<int>& nums, int target) {
        int lo=0,hi=nums.size()-1;
        while(hi>=lo){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target) return 1;
            if(nums[lo]<nums[mid]){ // left sorted
                if(nums[lo]<=target && target<nums[mid]){
                    hi=mid-1;
                }else{
                    lo=mid+1;
                }
            }else if(nums[lo]>nums[mid]){
              if(nums[mid]<target && target <=nums[hi]){ // target in range
                  lo=mid+1;
              }else{
                  hi=mid-1;
              }
            }else{
                lo++;
            }
        }
        return 0;
    }
};

