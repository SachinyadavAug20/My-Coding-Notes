#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define ll long long

class SolutionTLE {
public:
    // combinations
    // it is like desision tree at each step decide weather to take 1 step or 2 step
    //
    int paths=0;
    void climb(int n,int k){
        if(k==n){
            paths++;
            return;
        }
        if(k>n) return;
        climb(n, k+1);
        climb(n, k+2);
    }
    int climbStairs(int n) {
        paths=0;
        climb(n, 0);
        return paths;
    }// O(2^n)
};

class SolutionDP {
public:
    // pattern
    // see decision tree. repeating same problem like at step 4 reaching it many times
    //
    unordered_map<int, int> memo;
    int climb(int n,int k){
        if(memo.find(k)!=memo.end()){
            return memo[k];
        }
        if(k==n){
            return 1;
        }
        if(k>n) return 0;
        int p1=climb(n, k+1);
        int p2=climb(n, k+2);
        memo[k]=p1+p2;
        return p1+p2;
    }
    int climbStairs(int n) {
        memo.clear();
        return climb(n, 0);
    }// O(2^n)
};
