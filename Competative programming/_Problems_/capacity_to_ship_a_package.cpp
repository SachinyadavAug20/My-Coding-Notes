// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/submissions/2017280870/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    // minimum weight capacity of ship
    // we know to do in minimum=max_element() and maximum=sum(weights)
    // from 0 to sum(weights) as FFFFFFTTTTTT
    int shipWithinDays(vector<int>& weights, int days) {
        int lo=*max_element(weights.begin(),weights.end()),hi=accumulate(weights.begin(),weights.end(), 0);
        int minC=hi;
        while(hi>=lo){
            int mC=lo+(hi-lo)/2;
            long long daysNeeded=0;
            long long c_w=0;
            for(int wts:weights){
                if(c_w+wts>mC){
                    daysNeeded++;
                    c_w=wts;
                }else{
                    c_w+=wts;
                }
            }
            if(c_w>0) daysNeeded++;
            if(daysNeeded<=days){
                hi=mC-1;
                minC=min(minC,mC);
            }else{
                lo=mC+1;
            }
        }
        return minC;
    }
};

