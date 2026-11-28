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
    ListNode* mid(ListNode* head){

        if(head == NULL || head->next == NULL){
            
            return head;
        }

        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast != NULL && fast->next != NULL){

            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
private:
    ListNode* reverse(ListNode* head){

        if(head == NULL || head->next == NULL){

            return head;
        }
     
     ListNode* middle = mid(head);

     ListNode* second = middle->next;
     middle->next = NULL;

     ListNode* curr = second;

     ListNode* prev = NULL;

     ListNode* next = NULL;

     while(curr != NULL){

        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;


     }


     return prev;

    }
public:
    void reorderList(ListNode* head) {

        if(head == NULL){

            return;
        }

      
     
    //   ListNode* head1 = reverse(head);

       ListNode* head1 = head;
       ListNode* head2 = reverse(head);

       //int count = 0;

        while(head2 != NULL){

            ListNode* pres = head1->next;
            ListNode* next = head2->next;

            head1->next = head2;
            head2->next = pres;

            head1 = pres;
            head2 = next;
        }

        
    }
};