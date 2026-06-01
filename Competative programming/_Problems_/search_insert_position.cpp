// https://leetcode.com/problems/search-insert-position/description/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo=0,hi=nums.size()-1;
        while(hi>=lo){
            int m=lo+(hi-lo)/2;
            if(nums[m]==target) return m;
            if(nums[m]<target){
                lo=m+1;
            }else {
                hi=m-1;
            }
        }
        cout<<lo<<hi<<endl;
        if(hi<0) return 0;
        if(nums[hi]>target) return hi;
        return lo;
    }
};


