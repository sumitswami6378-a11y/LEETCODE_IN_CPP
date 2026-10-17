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
private:
       ListNode* reverse(ListNode* &head){

          if(head == NULL || head->next == NULL){

            return NULL;
          }

          ListNode* dummy = new ListNode(-1);

         
          ListNode* curr = head;

          while(curr != NULL){

            ListNode* newnode = new ListNode(curr->val);

            newnode->next = dummy->next;
            dummy->next = newnode;

            curr = curr->next;

           
          }
          
         

          ListNode* temp1 = dummy->next;


          return temp1;
        


       }


public:
    bool isPalindrome(ListNode* head) {

        ListNode* temp = head;

        ListNode* temp2 = reverse(head);

        while(temp != NULL && temp2 != NULL){

            if(temp->val == temp2->val){

               
                 temp = temp->next;
                 temp2 = temp2->next;
            }
            else{

                return false;
            }
            
        }

        return true;
        
    }
};