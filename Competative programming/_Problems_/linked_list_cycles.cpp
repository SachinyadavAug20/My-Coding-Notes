#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};
class SolutionMid {
public:
    // bad idea : can use max no of node possible which is 1e5 and do a loop 1e6 times doing this if we find null return false, we complete 1e6 iteration and not find null => return true  
    // bad idea will give 0% time score(very bad)
    // 
    // Optimal space approach is use a unordered set
    // gives 47% time(better)
  bool hasCycle(ListNode *head) { 
      unordered_set<ListNode*> st;
        // has no problem with duplicates as address will be different
      while(head!=NULL){
          if(st.count(head)){
              return true;
          }
          st.insert(head);
          head=head->next;
      }
      return false;
  }
};
class Solution {
public:
// for O(1) memory Solution
// Floyd's tortoise and hare
// need two pointer fast and slow
// slow pointer shift by 1 
// fast pointer shifts by 2
// s and f  will meet if have loop
// give 92% time and 52% space (best)
  bool hasCycle(ListNode *head) { 
      ListNode* s=head;
      ListNode* f=head;
      while(f!=NULL && f->next!=NULL){
          f=f->next->next;
          s=s->next;
          if(f==s){
              return 1;
          }
      }
      return 0;
  }
};
