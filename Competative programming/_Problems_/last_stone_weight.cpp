#include <bits/stdc++.h>
#include <queue>
using namespace std;
#define ll long long

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq=priority_queue<int>(stones.begin(),stones.end());
        while(pq.size()!=1){
            int s1=pq.top();
            pq.pop();
            int s2=pq.top();
            pq.pop();
            pq.push(s1-s2);
        }
        return pq.top();
    }
};
