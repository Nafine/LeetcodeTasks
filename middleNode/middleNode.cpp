ListNode* middleNode(ListNode* head)
{
    ListNode* current = head;

    size_t cnt = 0;

    while (current->next)
    {
        cnt++;
        current = current->next;
    }

    current = head;

    for (size_t i = 0; i < cnt / 2; i++)
    {
        current = current->next;
    }

    return current;
}