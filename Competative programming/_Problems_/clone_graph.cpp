#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define ll long long

class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

class Solution {
public:
  // map of clone will act as visted
    unordered_map<Node*, Node*> map; // old node:new node
    Node* dfs(Node* node){
      if(node==NULL) return NULL;
      if(map[node]!=NULL) return map[node];
      Node* newNode=new Node(node->val);
      map[node]=newNode;
      for(Node* n: node->neighbors){
        newNode->neighbors.push_back(dfs(n));
      }
      return newNode;
    }
    Node* cloneGraph(Node* node) {
      map.clear();
      return dfs(node);
    } // O(E+V)
};
