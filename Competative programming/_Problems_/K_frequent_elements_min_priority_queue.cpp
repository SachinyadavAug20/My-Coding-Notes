// https://leetcode.com/problems/top-k-frequent-elements/

#include <bits/stdc++.h>
using namespace std;
#define ll long long


vector<int> topKFrequent(vector<int>& nums, int k) {
    const int N=1e5+10,n=nums.size();
    unordered_map<int, int> hsh;
    // sort only need part not sort the entire hsh to find top k, only sort top k
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    hsh[N]=-1;
    for(int i=0;i<n;i++){
        hsh[nums[i]]++;
    }
    for(auto pr:hsh){
        if(pq.size()<k){
            pq.push({pr.second,pr.first});
        }else{
            if(pq.top().first<=pr.second){
                pq.pop();
                pq.push({pr.second,pr.first});
            }
        }
    }
    vector<int> ans;
    while (!pq.empty()) {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
}

int main(int argn, char *argv[]) {
  vector<int>nums={1,2,1,2,1,2,3,5,5,9,9,9,1,3,2};
  topKFrequent(nums, 2);

  return 0;
}
