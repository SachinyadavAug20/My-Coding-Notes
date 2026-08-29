#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        int ctn=0;
        while(n){
            if(n&1)ctn++;
            n>>=1;
        }
        return ctn;
    }
};

