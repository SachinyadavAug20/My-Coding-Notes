#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long

class Solution {
public:
    // plan
    // gas->good and cost->bad
    // find diff = gas[i]-cost[i]
    // try all +ve stating position and try to make full circle O(n^2)
    // need sum from +ve position to circular
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        vector<int> diff(n);
        int tt=0;
        for(int i=0;i<n;i++){
            diff[i]=gas[i]-cost[i];
            tt+=diff[i];
        }
        if(tt<0) return -1;// only way of -1, as only 1 unique solution

        int ans=0,total=0;
        for(int i=0;i<n;i++){
            if(total<0){
                total=0;
                ans=i;
            }
            total+=diff[i];
        }

        return ans;
    }
};
