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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ptr = head , *temp = NULL ; 
        while(ptr!= NULL && ptr->next!= NULL){
            if(ptr->val == ptr->next->val){
                temp = ptr->next;
                ptr->next = temp->next ;
                temp->next = NULL ;
            }
            else 
                ptr=ptr->next;
            temp = NULL ;
        }
        return head ;
    }
};