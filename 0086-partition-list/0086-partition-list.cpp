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
    ListNode* partition(ListNode* head, int x) {

        ListNode* dmmy1 = new ListNode(-1);
        ListNode* dmmy2 = new ListNode(-1);

        ListNode* first = dmmy1;
        dmmy1->next = NULL;
        ListNode* second = dmmy2;
        dmmy2->next = NULL;

        ListNode* temp = head;

        while(temp != NULL){

            ListNode* next = temp->next;

            if(temp->val < x){

                dmmy1->next = temp;
                dmmy1 = dmmy1->next;
                dmmy1->next = NULL;
            }
            else{

                dmmy2->next = temp;
                dmmy2 = dmmy2->next;
                dmmy2->next = NULL;
            }

            temp = next;
        }

        ListNode* temp1 = first;

        while(temp1->next != NULL){
            
            temp1 = temp1->next;

        }

        temp1->next = second->next;

        return first->next;
        
    }
};