#include <bits/stdc++.h>
#include <queue>
#include <unordered_map>
using namespace std;
#define ll long long

class Solution {
public:
    // plan
    // first clear the most frequent then go to next
    // impossible if(!prev and maxheap.empty())
    //
    string reorganizeString(string s) {
        unordered_map<char, int> mp;
        for(char ch:s) mp[ch]++;
        priority_queue<pair<int, char>> maxHeap;
        for(auto x:mp) maxHeap.push({x.second, x.first});
        string ans = "";

        queue<pair<int,char>> prev;

        while(!maxHeap.empty() || !prev.empty()){
            if(!prev.empty() && maxHeap.empty()) return "";
            auto pr=maxHeap.top();
            ans+=pr.second;
            pr.first--;
            maxHeap.pop();
            if(!prev.empty()){
                maxHeap.push(prev.front());
                prev.pop();
            }
            if(pr.first!=0){
                prev.push(pr);
            }
        }
        return ans;
    }
};
