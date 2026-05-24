// https://leetcode.com/problems/asteroid-collision/submissions/2011834618/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    int giveDirection(int num){
        if(num==0) return 10;
        if(num<0) return -1;
        return +1;
    }
    vector<int> asteroidCollision(vector<int>& asteroids) {
        // ans will have all positive or all negative
        // 4 possible -> <- , -> ->, <- <- and <- -> only one will collide -> <-
        int n=asteroids.size();
        if(n==0) return {};
        stack<pair<int,int>> ast;
        ast.push({abs(asteroids[0]),giveDirection(asteroids[0])});
        for(int i=1;i<n;i++){
            while((!ast.empty() && ast.top().second==1)&&giveDirection(asteroids[i])==-1){ // for collision
                if(abs(asteroids[i])>ast.top().first){
                    ast.pop();
                }else if(abs(asteroids[i])<ast.top().first){
                    asteroids[i]=0;
                }else{
                    ast.pop();
                    asteroids[i]=0;
                }
            }
            if(asteroids[i]) ast.push({abs(asteroids[i]),giveDirection(asteroids[i])});
        }

        vector<int> ans;
        while(!ast.empty()){
            auto p=ast.top();
            ans.push_back(p.first*p.second);
            ast.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};

