// https://leetcode.com/problems/maximum-frequency-stack/submissions/2014761243/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class FreqStack {
public:
    const int N=3e4;
    unordered_map<int, int> hsh;
    unordered_map<int,stack<int>> stk;
    int maxFreq=0;
    void push(int val) {
      hsh[val]++;
      stk[hsh[val]].push(val);
      maxFreq=max(maxFreq,hsh[val]);
    }
    
    int pop() {
        int i=maxFreq;
        while(stk[i].empty()){
            i--;
        }
        maxFreq=i;
        int a = stk[maxFreq].top();
        hsh[a]--;
        stk[maxFreq].pop();
        return a;
    }
};

