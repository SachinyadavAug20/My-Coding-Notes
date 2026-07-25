#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long

class SolutionN {
public:
    vector<vector<int>> ans;
    priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, greater<pair<int, vector<int>>>> minHeap;
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        ans.clear();
        for(auto v:points){
            minHeap.push({v[0]*v[0] + v[1]*v[1], v});
        }
        for(int i=0;i<k;i++){
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return ans;
    }// O(nlog(n))
};

class Solution {
public:
    vector<vector<int>> ans;
    priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>> minHeap;
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        ans.clear();
        for(auto v:points){
            minHeap.push({v[0]*v[0] + v[1]*v[1], v});
            if(minHeap.size()>k) minHeap.pop();
        }
        for(int i=0;i<k;i++){
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return ans;
    } // O(nlog(k))
};
