#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long

class KthLargest_ON {
public:
    int k;
    vector<int> topK;
    int kth;
    KthLargest_ON(int k, vector<int>& nums) {
        this->k = k;
        sort(nums.begin(), nums.end());
        int take = min((int)nums.size(), k);
        topK = vector<int>(nums.end() - take, nums.end());
        if (!topK.empty())
            kth = topK[0];
    }

    int add(int val) {
        if (topK.size() < k) {
            int pos = lower_bound(topK.begin(), topK.end(), val) - topK.begin();
            topK.insert(topK.begin() + pos, val);
            kth = topK[0];
            return kth;
        }
        if (val <= kth)
            return kth;
        int pos = lower_bound(topK.begin(), topK.end(), val) - topK.begin();
        topK.erase(topK.begin());
        pos--;
        if (pos < 0) pos = 0;
        if (pos > topK.size()) pos = topK.size();
        topK.insert(topK.begin() + pos, val);
        kth = topK[0];
        return kth;
    }// O(n)
};

class KthLargest {
public:
    int k;
    priority_queue<int, vector<int>, greater<int>> pq;
    int kth;

    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        int take = min((int)nums.size(), k);
        for(int i:nums){
            pq.push(i);
            if(pq.size()>k) pq.pop();
        }
    }
    int add(int val) {
        pq.push(val);
        if(pq.size()>k){
            pq.pop();
        }
        return pq.top();
    }// O(log(n))
};
