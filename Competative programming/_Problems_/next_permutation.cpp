#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size()-2;
        while(n>=0 && nums[n]>=nums[n+1]) n--;
        if(n>=0){
            int i=nums.size()-1;
            while(nums[i]<=nums[n]) i--;
            int temp=nums[i];
            nums[i]=nums[n];
            nums[n]=temp;
        }
        int l=n+1,r=nums.size()-1;
        while(l<r){
            int temp=nums[l];
            nums[l]=nums[r];
            nums[r]=temp;
            l++;r--;
        }
    }
};
