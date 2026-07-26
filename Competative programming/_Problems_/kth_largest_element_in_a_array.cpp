#include <bits/stdc++.h>
#include <queue>
using namespace std;
#define ll long long

class SolutionSort {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()-k];
    }
};
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int n:nums){
            pq.push(n);
            if(pq.size()>k){
                pq.pop();
            }
        }
        return pq.top();
    }
};
