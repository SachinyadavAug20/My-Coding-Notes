#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        int ans=1;
        while(n>=0){
            n-=ans;
            ans++;
        }
        return ans-2;
    }
};
