// https://leetcode.com/problems/min-stack/description/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class MinStack {
public:
    stack<int> st;
    stack<int> Smin;
    int n=-1;
    MinStack() {
        
    }
    
    void push(int val) {
        if(Smin.empty()){
        Smin.push(val);
        st.push(val);
        return;
        }
        Smin.push(min(val,Smin.top()));
        st.push(val);
    }
    
    void pop() {
        Smin.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return Smin.top();
    }
};
