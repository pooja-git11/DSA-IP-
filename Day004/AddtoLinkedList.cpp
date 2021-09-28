/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode *head){
        ListNode* curr = head, *prev = NULL, *nnext;
        
        while(curr){
            nnext = curr -> next;
            curr -> next = prev;
            prev = curr;
            
            curr = nnext;
        }
        
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        l1 = reverse(l1);
        l2 = reverse(l2);
        
        ListNode *first = l1, *second = l2, *head = NULL, *last;
        int carry = 0;
        
        while(first or second){
             ListNode* temp = new ListNode();
             int x = ((first) ? first -> val : 0) + ((second) ? second -> val : 0) + carry;
             carry = x / 10;
             temp -> val = x % 10;
             if(not head)
                 head = last = temp;
              else{
                  last -> next = temp;
                  last = last -> next;
              }
              if(first)
                first = first -> next;
              if(second)
                  second = second -> next;
        }
        if(carry){
            last -> next = new ListNode(1);
        }
        head = reverse(head);
        return head;
    }
};
