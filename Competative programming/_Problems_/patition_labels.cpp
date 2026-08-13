#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define ll long long

class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.size();
        unordered_map<int, int> lastIndexOfChar;
        for(int i=0;i<n;i++)lastIndexOfChar[s[i]]=i;

        vector<int> ans;
        int sz=0;
        int end=0;
        for(int i=0;i<n;i++){
            end=max(end, lastIndexOfChar[s[i]]);
            sz++;
            if(i==end){
                ans.push_back(sz);
                sz=0;
            }
        }
        return ans;
    }
};
