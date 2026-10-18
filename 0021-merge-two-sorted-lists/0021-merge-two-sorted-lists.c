/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {

    struct ListNode* temp1 = list1;
    struct ListNode* temp2 = list2;
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));

    dummy->val = -1;
    dummy->next = NULL;

    struct ListNode* curr = dummy;
    

    while(temp1 != NULL && temp2 != NULL){

        if(temp1->val < temp2->val){

            curr->next = temp1;
            temp1= temp1->next;
            curr = curr->next;
        }
        else{

            curr->next = temp2;
            temp2 = temp2->next;
            curr = curr->next;
        }
    }

    if(temp1 != NULL){

       curr->next = temp1;
    }
    if(temp2 != NULL){
        
        curr->next = temp2;
    }
    
    return dummy->next;
}