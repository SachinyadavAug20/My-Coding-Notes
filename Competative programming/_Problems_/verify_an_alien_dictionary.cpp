#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
  // plan
  // make map of letter to index in alien language
  // looking for 1st different letter
  // if 1 word is prefix of other than smaller word goes first
  //
  bool isAlienSorted(vector<string> &words, string order) {
    unordered_map<char, int> dict;
    int n = order.size();
    for(int i=0;i<n;i++){
      dict[order[i]]=i;
    }
    for(int i=1;i<words.size();i++){
      string w1=words[i-1],w2=words[i];
      for(int j=0;j<w1.size();j++){
        if(j==w2.size())// w1 is smaller(prefix)
          return false;

        if(w1[j]!=w2[j]){// different letter
          if(dict[w1[j]]>dict[w2[j]]) return false;
          break;
        }
      }
    }
    return true;
  }
};
