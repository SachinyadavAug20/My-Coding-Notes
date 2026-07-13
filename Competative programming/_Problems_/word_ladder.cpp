#include <algorithm>
#include <bits/stdc++.h>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define ll long long

class Solution {
public:
  // plan
  // 1. make adj matrix for pattern -> words in that patter
  // 2. bfs from beginWord to endWord to find min step
  //
  int ladderLength(string beginWord, string endWord, vector<string> &wordList) {
    if(find(wordList.begin(),wordList.end(),endWord)==wordList.end()) return 0;
    unordered_map<string, vector<string>> nei;
    wordList.push_back(beginWord);
    for(auto word:wordList){
      int sz=word.size();
      for(int j=0;j<sz;j++){
        string patter=word.substr(0,j)+"*"+word.substr(j+1,sz);
        nei[patter].push_back(word);
      }
    }
    // bfs
    unordered_set<string> vist;
    vist.insert(beginWord);
    queue<string> q;
    q.push(beginWord);
    int step=1;
    while(!q.empty()){
      int a=q.size();
      while (a--) {
        string word=q.front();
        q.pop();
        if(word==endWord) return step;
        // all patter
        int sz=word.size();
        for(int j=0;j<sz;j++){
          string patter=word.substr(0,j)+"*"+word.substr(j+1,sz);
          for(string neiWord:nei[patter]){
            if(vist.find(neiWord)==vist.end()){
               vist.insert(neiWord);
               q.push(neiWord);
            }
          }
        }
      }
      step++;
    }
    return 0;
  }
};
