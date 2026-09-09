#include <bits/stdc++.h>
using namespace std;

class SolutionBRUTE {
public:
    long long minEnd(int n, int x) {
        long long ans=x;
        for(int i=0;i<n;i++){
            ans+=1;
            ans=ans|x;
        }
        return ans;
    }// O(n)
};

class Solution {
public:
    long long minEnd(int n, int x) {
        int ans=x;
        int i_x=1,i_n=1;
        while(i_n<=n-1){
            if((i_x&x)==0){
                if(i_n & (n-1)){
                    ans=ans|i_x;
                }
                i_n<<=1;
            }
            i_x<<=1;
        }
        return ans;
    }// O(log n)
};
