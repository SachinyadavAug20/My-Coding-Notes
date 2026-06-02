// https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-i/description/?envType=daily-question&envId=2026-06-02

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n=landStartTime.size(),m=waterDuration.size();
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                // land to water
                int fl1=landStartTime[i]+landDuration[i];
                int sw1=max(fl1,waterStartTime[j]);
                int fw1=sw1+waterDuration[j];

                // water to land
                int fw2=waterStartTime[j]+waterDuration[j];
                int sl2=max(fw2,landStartTime[i]);
                int fl2=sl2+landDuration[i];
                ans=min(ans,min(fw1,fl2));
            }
        }
        return ans;
    }
};

