#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct ListDouble {
  int key;
    int val;
    ListDouble* prev;
    ListDouble* next;

    ListDouble(int k,int x) {
        key=k;
        val = x;
        prev = NULL;
        next = NULL;
    }
};

class LRUCache {
  // if capacity exceeds removes least recently used key
public:
    int cap;
    unordered_map<int, ListDouble*>hsh; // key:node
    ListDouble* left=new ListDouble(0,0);
    ListDouble* right=new ListDouble(0,0); 
    // left = LRU and right=MRU
    LRUCache(int capacity) {
        cap=capacity;
        left->next=right;
        right->prev=left;
    }
    void remove(ListDouble*node){
      ListDouble* prev=node->prev;
      ListDouble* next=node->next;
      // pass over it
      prev->next=next;
      next->prev=prev;
    }
    // at end right
    void insert(ListDouble*node){
      ListDouble* prev=right->prev;
      ListDouble* nxt=right;
      prev->next=nxt->prev=node;
      node->next=nxt;
      node->prev=prev;
    }
    int get(int key) {
      auto it=hsh.find(key);
      if(it!=hsh.end()){
        remove(hsh[key]);
        insert(hsh[key]);
        // thus recently used at right
        return  hsh[key]->val;
      }
      return -1;
        
    }
    
    void put(int key, int value) {
      auto it=hsh.find(key);
        if(it!=hsh.end()){
          remove(hsh[key]);
        }
        hsh[key]=new ListDouble(key,value);
        insert(hsh[key]);
        if(hsh.size()>cap){// remove 1 element
          // remove LRU (which is at front(left))
          ListDouble* lru=left->next;
          remove(lru);
          hsh.erase(lru->key);
          delete lru;
        }
    }
};
