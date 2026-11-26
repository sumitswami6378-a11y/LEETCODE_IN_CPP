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
    ListNode* deleteDuplicates(ListNode* head) {

       if(head == NULL || head->next == NULL){

        return head;
       }

        ListNode* curr = head;

        ListNode* dmmy = new ListNode(-1);
        dmmy->next = head;
        ListNode* temp = dmmy;

        while(curr != NULL && curr->next != NULL){


            if(curr->val == curr->next->val){

                 int duplicate = curr->val;



            while(curr != NULL && duplicate  == curr->val){

                curr = curr->next;

            }

            temp->next = curr;


            }
            else{

                  temp = curr;
                  curr = curr->next;


            }
                 
         

        }

    
    return dmmy->next;
        
    }
};