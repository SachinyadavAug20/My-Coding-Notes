#include <bits/stdc++.h>
#include <queue>
#include <unordered_map>
using namespace std;
#define ll long long

class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        int n = tasks.size();
        for(int i=0;i<n;i++) tasks[i].push_back(i); // now {enT,time,index}
        sort(tasks.begin(),tasks.end());
        vector<int> ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq; // {enT,index}
        long long time = tasks[0][0],i=0;
        while(!pq.empty() || i<n){
            while(i<n && time>=tasks[i][0]) pq.push({tasks[i][1],tasks[i][2]}),i++;
            if(pq.empty()){
                time=tasks[i][0];
                continue;
            }
            pair<int,int> temp = pq.top(); pq.pop();
            time+=temp.first;
            ans.push_back(temp.second);
        }
        return ans;
    }
};
