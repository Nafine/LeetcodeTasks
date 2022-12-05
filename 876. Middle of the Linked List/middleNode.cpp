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

ListNode* middleNode(ListNode* head) {
        
        int cnt = 0;
        
        ListNode* current = head;
        
        for (;current;cnt++)
        {
            current = current->next;
        }
        
        current = head;
        
        for(size_t i = 0;i < cnt/2;i++)
        {
            current = current->next;
        }
        
        return current;
    }