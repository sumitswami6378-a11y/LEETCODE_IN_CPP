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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(head == NULL || head->next == NULL){

            return NULL;
        }

        int length = 0;

        ListNode* temp = head;

        while(temp != NULL){
            temp = temp->next;
            length++;
        }
      
      if(length == n){

        return head->next;
      }
        
      ListNode* start = head;
      int count =0;

      while(start->next != NULL && count < length -n){

        start = start->next;
        count++;
      }

       ListNode* temp2 = head;

       while(temp2->next != start){

        temp2 = temp2->next;

       }
        
        temp2->next = start->next;


      return head;
        
    }
};