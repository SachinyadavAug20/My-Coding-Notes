// https://leetcode.com/problems/daily-temperatures/submissions/2011870486/

#include <bits/stdc++.h>
using namespace std;
#define ll long long


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
    // monotonic decreasing stack problem
    // algo
    // compare to stack.top if greater found give distance at position in ans
        int n=temperatures.size();
        vector<int> ans(n);
        stack<pair<int,int>> st; // ind,temp
        for(int i=0;i<n;i++){
                while(!st.empty()&&st.top().second<temperatures[i]){
                    ans[st.top().first]=(i-st.top().first);
                    st.pop();
                }
            st.push({i,temperatures[i]});
        }
        while(!st.empty()){
            ans[st.top().first]=0;
            st.pop();
        }
        return ans;
    }
};

