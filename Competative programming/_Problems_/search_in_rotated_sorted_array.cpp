// https://leetcode.com/problems/search-in-rotated-sorted-array/description/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    // This is strick increasing order - makes easy
  // as need to do O(logn)
  // can't find pivote as it is O(n)
  // after rotation -> 2 part
  // left sorted part && right sorted part
  int search(vector<int> &nums, int target) {
      int lo=0,hi=nums.size()-1;
      while(hi>=lo){
          int mid=(hi+lo)/2;
          if(nums[mid]==target){
              return mid;
          }
          if(nums[lo]<=nums[mid]){ // in left sorted
              if(nums[mid]<target || target<nums[lo]){// target not in range
                  lo=mid+1; // go to right side
              }else{ 
                  hi=mid-1;
              }
          }else{ // right sorted
              if(nums[mid]>target || target >nums[hi]){ // target in range
                  hi=mid-1;
              }else{
                  lo=mid+1;
              }
          }
      }
      return -1;
  }
};

