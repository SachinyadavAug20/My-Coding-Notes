// https://leetcode.com/problems/boats-to-save-people/description/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        // boat can carry at-most 2 people makes -> 2 pointer 
        // try to get as close to limit as possible  #greedy
        int ans=0;
        int n=people.size();
        sort(people.begin(),people.end());
        int r=n-1,l=0;
        while(l<=r){
            int BigWt=people[r],lightWt=people[l];
            int remain=limit-BigWt;
            r--;
            ans++; // add heavyp
            if(l<=r && remain>=lightWt){
                l++;
            }
        }
        return ans;
    } // nlogn because of sort
};
