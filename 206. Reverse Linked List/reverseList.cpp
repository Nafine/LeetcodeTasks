ListNode* reverseList(ListNode* head)
{
    ListNode* nxt;
    ListNode* prev = nullptr;

    while (head)
    {
        nxt = head->next;

        head->next = prev;
        prev = head;
        head = nxt;
    }

    return prev;
}