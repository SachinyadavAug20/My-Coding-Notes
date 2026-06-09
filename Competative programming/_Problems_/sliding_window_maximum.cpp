// https://leetcode.com/problems/sliding-window-maximum/submissions/2027626903/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    // brute force is for each window do a run check of max -> O(n*(n-k))
    // 
    // optimized Solution -> monotonic decreasing queue
    // check for only new element which is add to the window 
    // we will use deque of decreasing order
    // thus maximum will always be at back of the deque
    // add and remove n in deque -> O(2n)
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans;
        int r=k-1;
        deque<int> dq;
        int c_max=nums[0];
        for(int i=0;i<=r;i++){
            while(!dq.empty() && dq.back()<nums[i]){
                dq.pop_back();
            }
            dq.push_back(nums[i]);
        }
        ans.push_back(dq.front());
        for(int i=1;i<n-k+1;i++){
            if(!dq.empty() && dq.front()==nums[i-1]){
                dq.pop_front();
            }
            r++;
            while(!dq.empty() && nums[r]>dq.back()){
                dq.pop_back();
            }
            dq.push_back(nums[r]);
            ans.push_back(dq.front());
        }
        return ans;
    }
};

