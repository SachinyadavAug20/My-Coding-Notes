#include <bits/stdc++.h>
using namespace std;
#define ll long long

class SolutionTLE {
public:
    // entertain all possible -> changes
    // ( -> 1, ) -> 2 and * -> 3
    bool dfs(string s, int i,stack<int> st) {
        if(i==s.size() && st.empty()) return true;
        if (i == s.size()) return st.empty();
        int val=s[i]=='('?1:s[i]=='*'?3:2;
        if(val==1){
            st.push(val);
            return dfs(s,i+1,st);
        }else if(val==2){
            if(st.empty()) return false;
            st.pop();
            return dfs(s,i+1,st);
        }else{
            // 3 possible
            // if _
            bool p1=dfs(s,i+1,st);
            // if (
            st.push(1);
            bool p2=dfs(s,i+1,st);
            st.pop(); // back
            // if )
            if(st.empty()) return false;
            st.pop();
            bool p3=dfs(s,i+1,st);
            return p1 || p2 || p3;
        }
    }
    bool checkValidString(string s) {
        stack<int> st;
        return dfs(s,0,st);
    }// 2^100 --> memo O(n)
};

class Solution {
public:
    // greedy
    //
    bool checkValidString(string s) {
        int leftMin=0,leftMax=0;
        for(char ch:s){
            if(ch=='('){
                leftMin++;
                leftMax++;
            }else if(ch==')'){
                leftMin--;
                leftMax--;
            } else { // '*'
                leftMin--;   // treat '*' as ')'
                leftMax++;  // treat '*' as '('
            }
            leftMin = max(0, leftMin);// can't be -ve

            if (leftMax < 0)
                return false;
        }
        return leftMin==0;
        
    }
};
