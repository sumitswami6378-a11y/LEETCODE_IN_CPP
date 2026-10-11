class Solution {

    ListNode* midList(ListNode* &head) {

         ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != NULL && fast->next != NULL) {

              slow = slow->next;
            fast = fast->next->next;
        }

     return slow;
    }

private:

    ListNode* merge(ListNode* head, ListNode* head1) {

        ListNode* dummy = new ListNode(-1);
          ListNode* temp = dummy;

        while (head != NULL && head1 != NULL) {

            if (head->val <= head1->val) {

                temp->next = head;
                head = head->next;
                  temp = temp->next;
            }
            else {

                temp->next = head1;
                 head1 = head1->next;
                temp = temp->next;
            }
        }

        while (head != NULL) {

            temp->next = head;
            head = head->next;
            temp = temp->next;
        }

        while (head1 != NULL) {

            temp->next = head1;
             head1 = head1->next;
            temp = temp->next;
        }

            return dummy->next;
    }

public:

    ListNode* sortList(ListNode* head) {

        if (head == NULL || head->next == NULL) {
            return head;
     }

        ListNode* mid = midList(head);

        ListNode* righthead = mid->next;

        mid->next = NULL;

        ListNode* left = sortList(head);
        ListNode* right = sortList(righthead);

        return merge(left, right);
    }
};