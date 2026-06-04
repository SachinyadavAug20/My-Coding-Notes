// https://leetcode.com/problems/find-in-mountain-array/submissions/2022360667/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
  // moutain array 1,2,3,4,5,3,2,1
  // both side of peak are stricty increasing or decraseing
  // peak is unknown(unique)
  // find index of first occurance of targets
  // same peak divides the moutain in 2 parts
  // try to find peak and do binary search in both parts
  // search in left side first (first occurance)
public:
  int findInMountainArray(int target, MountainArray &mountainArr) {
    int lo = 0, hi = mountainArr.length() - 1;
    int n=hi+1;
    int peak;
    while (hi >= lo) {
      // at left nums[m-1]<nums[m]<nums[m+1]
      // at right nums[m-1]>nums[m]>nums[m+1]
      // at peak nums[m-1]<nums[m]>nums[m+1]
      int m = lo + (hi - lo) / 2;
      int cur=mountainArr.get(m);
      int left = (m > 0) ? mountainArr.get(m - 1) : INT_MIN;
      int right = (m + 1 < n) ? mountainArr.get(m + 1) : INT_MIN;

      if (cur > left && cur > right) {
          peak=m;
          break;
      }else if(left<cur && cur<right){
          lo=m+1;
      }else{
          hi=m-1;
      }
    }
    cout<<peak;

    // now 2 portions left 0,peak and peak,n
    lo=0,hi=peak;
    while(hi>=lo){
        int m=lo+(hi-lo)/2;
        int cm=mountainArr.get(m);
        if(cm==target) return m;
        if(cm<target){
            lo=m+1;
        }else{
            hi=m-1;
        }
    }

    // 2nd :- reverse 5,4,3,2,1
    lo=peak+1,hi=n-1;
    while(hi>=lo){
        int m=lo+(hi-lo)/2;
        int cm=mountainArr.get(m);
        if(cm==target) return m;
        if(cm<target){
            hi=m-1;
        }else{
            lo=m+1;
        }
    }
    return -1;
  }
};

