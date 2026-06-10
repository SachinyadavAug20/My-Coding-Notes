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

class SolutionME {
public:
  // 1->2->3->4->5->NULL
  // converts to 1->5->2->4->3->NULL

  void reorderList(ListNode *head) {
    if (head == NULL)
      return;
    vector<int> arr;
    ListNode *temp = head;
    while (temp != NULL) {
      arr.push_back(temp->val);
      temp = temp->next;
    }
    int l = 0, r = arr.size() - 1;
    vector<int> reordered;
    while (l <= r) {
      if (l == r) {
        reordered.push_back(arr[l]);
      } else {
        reordered.push_back(arr[l]);
        reordered.push_back(arr[r]);
      }
      l++;
      r--;
    }
    temp = head;
    int i = 0;
    while (temp != nullptr) {
      temp->val = reordered[i++];
      temp = temp->next;
    }
  }  // O(n) O(n) space and time solution
};
class Solution {
public:
  // use slow and fast pointer
  void reorderList(ListNode *head) {
    if(head==NULL) return;
    ListNode* slow=head;
    ListNode* fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode* secondHalf=slow->next;
    slow->next=NULL; // split

    ListNode* prev=NULL;
    // reverse secondHalf
    while (secondHalf!=NULL) {
      ListNode* temp=secondHalf->next;
      secondHalf->next=prev;
      prev=secondHalf;
      secondHalf=temp;
    }
    secondHalf=prev;
    // merge two halves
    ListNode* first=head;
    while(secondHalf!=NULL){
      ListNode* temp1=first->next;
      ListNode* temp2=secondHalf->next;
      // merge
      first->next=secondHalf;
      secondHalf->next=temp1;
      // shift
      first=temp1;
      secondHalf=temp2;
    }
  }  // O(1) O(n) space and time solution
};
