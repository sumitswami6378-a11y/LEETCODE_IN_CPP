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
    ListNode* convertlist(vector<int>& arr){
        ListNode* dmmy = new ListNode(-1);
        ListNode* temp1 = dmmy;
        for(int i=0; i<arr.size(); i++){  
            temp1->next = new ListNode(arr[i]);
            temp1 = temp1->next;
        }
        return dmmy->next;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> arr;
        for(int i=0; i<lists.size(); i++){
            ListNode* temp = lists[i];
            while(temp != NULL){
                arr.push_back(temp->val);
                temp = temp->next;
            }
        }
        sort(arr.begin(),arr.end());
        ListNode* head = convertlist(arr);
        return head;
    }
};