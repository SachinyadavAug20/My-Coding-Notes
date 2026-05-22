// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(),k=0;
        int l=1,prev=nums[0];
        k++; // 1st value is unique
        for(int i=1;i<n;i++){
            if(nums[i]!=prev){
                nums[l]=nums[i];
                l++;
                k++;
            }
            prev=nums[i];
        }
        return k;
    } // O(n) time and O(1) space 
};
