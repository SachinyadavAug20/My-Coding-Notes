// https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/description/

#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int appendCharacters(string s, string t) {
        int sn=s.size(),tn=t.size();
        stack<char> st;
        for(int i=tn-1;i>=0;i--){
            st.push(t[i]);
        }
        char curr_c=st.top();
        for(int i=0;i<sn;i++){
            if(s[i]==curr_c && !st.empty()){
                st.pop();
                curr_c=st.top();
                // cout<<" curr_c "<<curr_c<<endl;
            }
        }
        // while(!st.empty()){
          // cout<<st.top()<<endl;
          // st.pop();
        // }
        return st.size();
}

int main(int argn, char *argv[]) { 
    cout<<appendCharacters("abz","abc");
    return 0; 
}
