#include <bits/stdc++.h>
#include <queue>
#include <unordered_map>
using namespace std;
#define ll long long

class Solution {
public:
    // min time >= task.size()
    // as order -> not matter -> hsh
    // it is good to process high freq char first => max heap(to minimize wait time)
    // to take care of wait --> queue(monotonic queue)
    //
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> list;
        for(char ch:tasks) list[ch]++;
        priority_queue<int> maxHeap;
        for(auto p:list) maxHeap.push(p.second);

        queue<pair<int,int>> wait; // task:time
        int time = 0;
        while(!maxHeap.empty() || !wait.empty()){
            while(!wait.empty() && wait.front().second<=time){
                maxHeap.push(wait.front().first);
                wait.pop();
            }
            if(!maxHeap.empty()){
                int task=maxHeap.top();
                maxHeap.pop();
                task--;
                if(task>0) wait.push({task,time+n+1});
            }
            time++;
        }
        return time;
    }// O(nlog26) = O(n)
};
