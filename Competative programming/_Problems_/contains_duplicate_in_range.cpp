// https://leetcode.com/problems/contains-duplicate-i/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class SolutionMY {
public:
    // at position i and j must be same elements
    // size of the window between this window is <= k
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,vector<int>> hsh; // val:pos+1
        for(int i=0;i<n;i++){
            int c=nums[i];
            if(hsh[c].size()!=0){
                for(int j:hsh[c]){
                    if(abs(j-1-i)<=k) return 1;
                    cout<<j<<" "<<i<<endl;
                }
            }
            hsh[c].push_back(i+1);
        }
        return 0;
    }
};


class SolutionSliding {
public:
    // at position i and j must be same elements
    // size of the window between this window is <= k
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_set<int> windowhsh;
        int l=0;
        for(int i=0;i<n;i++){
            if(i-l>k){
                windowhsh.erase(nums[l]);
                l++;
            }
            if(windowhsh.find(nums[i])!=windowhsh.end()){
                return true;
            }
            windowhsh.insert(nums[i]);
        }
        return false;
    }
};

