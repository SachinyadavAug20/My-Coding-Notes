#include <bits/stdc++.h>
#include <queue>
using namespace std;
#define ll long long

class Solution {
public:
    // plan 
    // constrain is use all 3 chars full frequency(as need longest)
    // use most frequest char 1st and lock it after 2 uses
    //
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>> pq;
        if(a)pq.push({a,'a'});
        if(b)pq.push({b,'b'});
        if(c)pq.push({c,'c'});
        string s="";
        queue<pair<int,char>> wait;
        while(pq.size()){
            auto p=pq.top();
            pq.pop();
            p.first--;
            s+=p.second;
            if(wait.size()){
                pq.push(wait.front());
                wait.pop();
            }
            if(s.size()>1 && p.first!=0){
                if(s[s.size()-2]==p.second){
                    wait.push(p);
                }else {
                    pq.push(p);
                }
            }else if(p.first!=0){
                pq.push(p);
            }
        }
        return s;
    }
};
