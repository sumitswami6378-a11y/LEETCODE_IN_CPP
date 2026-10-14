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
    ListNode* swapNodes(ListNode* head, int k) {

        if(head == NULL){

            return NULL;
        }

        int length =0;

        ListNode* len = head;

        while(len != NULL){
            
            len = len->next;
            length++;

        } 
        int count1 =0;
        int count2 =0;

        ListNode* dlt1 = head;
        ListNode* dlt2 = head;

        while(dlt1->next != NULL && count1 < k-1){

            dlt1= dlt1->next;
            count1++;
        }
        while(dlt2->next != NULL && count2 < length-k){

            dlt2 = dlt2->next;
            count2++;
        }
        
        swap(dlt1->val,dlt2->val);
        


      return head;  
    }
};