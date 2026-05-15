// https://leetcode.com/problems/longest-consecutive-sequence/description/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // unordered_set solves 2 problems hsh O(1) find and removes duplicates
        unordered_set<int> hsh;
        int n=nums.size(),ans=1;
        if(n==0 || n==1) return n;
        for(int num:nums){
            hsh.insert(num);
        }
        for(int num:hsh){
            if(hsh.find(num-1)==hsh.end()){
                int ctn=0;
                do{
                    num++;
                    ctn++;
                }while(hsh.find(num)!=hsh.end());
                ans=max(ans,ctn);
            }
        }
        return ans;
    }
};
