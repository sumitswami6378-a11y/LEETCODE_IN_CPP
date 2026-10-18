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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(head == NULL || head->next == NULL){

            return head;
        }

        int countleft = 1;
        int countright = 1;
        ListNode* temp1 = head;
       
        ListNode* temp2 = head;

        while(countleft < left){

            temp1 = temp1->next;
            countleft++;
        }
        
        ListNode* dummy = new ListNode(-1);
         ListNode* curr = dummy;
        dummy->next = head;

        while(curr->next != temp1){

            curr = curr->next;
        }

        while(countright < right){

            temp2 = temp2->next;
            countright++;
        }
        // nodes ko ek-ek karke front mein lao
        for(int i = 0; i < right - left; i++) {

            ListNode* temp2 = temp1->next;

            temp1->next = temp2->next;

            temp2->next = curr->next;

            curr->next = temp2;
        }

        return dummy->next;
    }
};