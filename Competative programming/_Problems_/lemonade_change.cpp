#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define ll long long

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int> coins(3,0); // 5:10:20
        // no need to track 20 as it is the highest
        for(int a:bills){
            if(a==5) coins[0]++;
            else if(a==10 && coins[0]) coins[0]--,coins[1]++;
            else if(a==20 && coins[1] && coins[0]) coins[0]--,coins[1]--,coins[2]++;
            else if(a==20 && coins[0]>=3) coins[0]-=3;
            else return false;
        }
        return true;
    }
};
