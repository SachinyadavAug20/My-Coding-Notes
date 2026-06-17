#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
  // make group 
  // reverse them then, join them
  ListNode* getKthNode(ListNode*curr,int k){
    while (curr && k>0) {
      curr=curr->next;
      k-=1;
    }
    return curr;
  }
  ListNode *reverseKGroup(ListNode *head, int k) {
    ListNode* dummy=new ListNode(0,head);
    ListNode* groupPrev=dummy;
    while (1) {
      ListNode* kth=getKthNode(groupPrev,k);
      // if null small group
      if(kth==NULL) break;
      ListNode* groupNext=kth->next;
      // reverse group
      ListNode* prev=kth->next;
      ListNode* curr=groupPrev->next;
      while (curr!=groupNext) {
        ListNode* tmp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=tmp;
      }
      ListNode* tmp=groupPrev->next;
      groupPrev->next=kth; // put kth at begining
      groupPrev=tmp;
    }
    return dummy->next;
  }
};
