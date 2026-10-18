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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

      ListNode*head1 = l1;
      ListNode*head2 = l2;

      ListNode* dummy = new ListNode(-1);
      ListNode* curr = dummy;

      int sum = (head1->val + head2->val) % 10;
      int carry = (head1->val + head2->val)/10;
      ListNode* newnode = new ListNode(sum);
      curr->next = newnode;
      curr = newnode;
      head1 = head1->next;
      head2 = head2->next;

      while(head1 != NULL && head2 != NULL){

        sum = (head1->val + head2->val + carry) % 10;
        carry = (head1->val + head2->val + carry)/10;
        ListNode* newnode = new ListNode(sum);
        curr->next = newnode;
        curr = newnode;
        
        head1 = head1->next;
        head2 = head2->next;
      }

      while(head1 != NULL){

         sum = (head1->val + carry) % 10;
         carry = (head1->val + carry)/10;
          ListNode* newnode = new ListNode(sum);
          curr->next = newnode;
          curr = newnode;
         head1 = head1->next;
      }

       while(head2 != NULL){

         sum = (head2->val + carry) % 10;
         carry = (head2->val + carry)/10;
          ListNode* newnode = new ListNode(sum);
          curr->next = newnode;
          curr = newnode;
         head2 = head2->next;
       }

       if(carry != 0){

         ListNode* newnode = new ListNode(carry);
         curr->next = newnode;
         curr = newnode;
        }

        curr->next = NULL;


      return dummy->next;
        
    }
};