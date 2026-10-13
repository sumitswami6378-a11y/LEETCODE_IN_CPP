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

     ListNode* Middle(ListNode* head){

        if(head == NULL){

            return head;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){

            slow = slow->next;
            fast = fast->next->next;

           
        }

        return slow;

     }
public:
    ListNode* deleteMiddle(ListNode* head) {

        if(head == NULL || head->next == NULL){

            return NULL;
        }

        ListNode* middle = Middle(head);

        ListNode* temp = head;
        
        while(temp->next != middle){

            temp = temp->next;
        }
        if(temp->next == middle){

            temp->next = middle->next;
        }

        return head;
        
    }
};