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
    ListNode* reverse(ListNode* head){

        if(head == NULL || head->next == NULL){

            return head;
        }

        ListNode* dummy = new ListNode(-1);

        ListNode* curr = head;

        while(curr != NULL){

            ListNode* newnode = new  ListNode(curr->val);

            newnode->next = dummy->next;
            dummy->next = newnode;

            curr = curr->next;


        }

        return dummy->next;
    }

public:
    int pairSum(ListNode* head) {

        ListNode* temp = head;

        ListNode* temp1 = reverse(head);
        int maximum = 0;

        while(temp != NULL && temp1 != NULL){

            int sum = 0;

            sum = sum + (temp->val + temp1->val);

            if(sum > maximum){

                maximum = sum;
            }

            temp = temp->next;
            temp1 = temp1->next;
        }
        
        return maximum;
    }
};