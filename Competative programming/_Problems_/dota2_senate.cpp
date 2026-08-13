#include <bits/stdc++.h>
#include <deque>
#include <new>
#include <queue>
using namespace std;
#define ll long long

class Solution {
public:
    // plan
    // have a choice -> it matter as for wining need to choose to remove closest opposition
    //
    string predictPartyVictory(string senate) {
        deque<int> indexR;
        deque<int> indexD;
        int n=senate.size();
        for(int i=0;i<n;i++){
            if(senate[i]=='R'){
                indexR.push_back(i);
            }else{
                indexD.push_back(i);
            }
        }
        while(indexR.size()!=0 && indexD.size()!=0){
            if(indexR.front() < indexD.front()){
                int iR=indexR.front()+n;
                indexR.pop_front();
                indexR.push_back(iR);
                indexD.pop_front();
            }else{
                int iD=indexD.front()+n;
                indexD.pop_front();
                indexD.push_back(iD);
                indexR.pop_front();
            }
        }
        string ans= indexR.size()?"Radiant":"Dire";
        return ans;
    }
};
