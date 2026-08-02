#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    // will be able to take profit if capital >= w
    // no need to spend capital to get profit
    // 2 heap problem
    //
  int findMaximizedCapital(int k, int w, vector<int> &profits,
                           vector<int> &capital) {
      priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minHeap; // capital,profit
      int n=profits.size();
      for(int i=0;i<n;i++) minHeap.push({capital[i],profits[i]});
      priority_queue<int> maxHeap;
      while(k){
          k--;
          while(minHeap.size() && minHeap.top().first<=w){
              maxHeap.push(minHeap.top().second);
              minHeap.pop();
          }
          if(!maxHeap.size()) break;
          w+=maxHeap.top();
          maxHeap.pop();
      }
      return w;
  }// O(klogn)
};
