#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  (ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr))
#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define int long long

// use tries

class WordDictionary {
private:
  struct TrieNode {
    TrieNode *children[26];
    bool isEnd;

    TrieNode() {
      isEnd = false;
      for (int i = 0; i < 26; i++) children[i] = nullptr;
    }
  };

  TrieNode *root;
  bool searchHelper(string &word, int index, TrieNode *node) {
    if (index == word.length()) return node->isEnd;
    char ch = word[index];
    if (ch == '.') {
      for (int i = 0; i < 26; i++) 
        if (node->children[i] != nullptr) 
          if (searchHelper(word, index + 1, node->children[i])) 
            return true;
      return false;
    } else {
      int idx = ch - 'a';
      if (node->children[idx] == nullptr) return false;
      return searchHelper(word, index + 1, node->children[idx]);
    }
  }

public:
  WordDictionary() { root = new TrieNode(); }
  void addWord(string word) {
    TrieNode *curr = root;
    for (char ch : word) {
      int idx = ch - 'a';
      if (curr->children[idx] == nullptr) curr->children[idx] = new TrieNode();
      curr = curr->children[idx];
    }
    curr->isEnd = true;
  }
  bool search(string word) { return searchHelper(word, 0, root); }
};
