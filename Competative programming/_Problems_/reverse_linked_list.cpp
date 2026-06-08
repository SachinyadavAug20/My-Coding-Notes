// https://leetcode.com/problems/reverse-linked-list/

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
class SolutionIterative {
public:
    // rever linked list 1->2->3->4 make it 4->3->2->1
    // plan
    // have curr=head(1) and prev=(null)
    // move till reach other other side null
    // make next = store next of curr
    // curr next -> prev
    // prev = curr
    // curr = next(move)
    ListNode* reverseList(ListNode* head) {
        ListNode*curr=head;
        ListNode* prev=NULL;
        ListNode* nxt;
        while(curr){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    } // O(n) and O(1) memory
};
class SolutionRecursive {
public:
    // rever linked list 1->2->3->4 make it 4->3->2->1
    // plan
    // for a head rever 1 node at a time
    // base case is at null
    // -> 1 
    ListNode* reverseList(ListNode* head) {
        if(!head){
            return NULL;
        }
        ListNode* newHead=head;
        if(head->next){
            newHead=reverseList(head->next);
            head->next->next=head;
        }
        head->next=NULL;
        return newHead;
    } // O(n) and O(n) memory as make n temp
};

