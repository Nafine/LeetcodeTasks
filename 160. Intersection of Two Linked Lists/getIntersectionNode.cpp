/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 #include <algorithm>
 
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
    {
        int aSize = 0, bSize = 0;

        ListNode* startHeadA = headA;
        ListNode* startHeadB = headB;

        while (headA)
        {
            ++aSize;
            headA = headA->next;
        }

        while (headB)
        {
            ++bSize;
            headB = headB->next;
        }

        headA = startHeadA;
        headB = startHeadB;

        int counter = std::abs(aSize - bSize);

        if (std::max(aSize, bSize) == aSize)
        {
            for (; counter > 0; --counter)
            {
                headA = headA->next;
            }
        }

        else
        {
            for (; counter > 0; --counter)
            {
                headB = headB->next;
            }
        }

        while ( (headA && headB) && headA != headB)
        {
            headA = headA->next;
            headB = headB->next;
        }

        return headA;
    }
};