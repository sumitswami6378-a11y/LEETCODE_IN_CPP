class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {

        if(head == NULL || head->next == NULL)
            return head;

        ListNode* prev = head;
        ListNode* temp = head->next;

        while(temp != NULL) {

            if(prev->val <= temp->val) {
                prev = temp;
                temp = temp->next;
                continue;
            }

            ListNode* temp2 = head;

            if(temp2->val > temp->val) {
                prev->next = temp->next;
                temp->next = head;
                head = temp;
                temp = prev->next;
            }
            else {
                while(temp2->next != NULL &&
                      temp2->next->val <= temp->val) {
                    temp2 = temp2->next;
                }

                if(temp2 != prev) {
                    prev->next = temp->next;
                    temp->next = temp2->next;
                    temp2->next = temp;
                    temp = prev->next;
                }
                else {
                    prev = temp;
                    temp = temp->next;
                }
            }
        }

        return head;
    }
};