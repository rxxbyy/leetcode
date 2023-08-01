/*
    Date: Jul 18, 2023
    Problem Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list
*/
#include <stdio.h>

/* Definition for a singly-linked list. */
struct ListNode {
    int val;
    struct ListNode* next;
};


/* remoteNthFromEnd: remove the n node from the end of a linked list*/
struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    struct ListNode *delay = head, *slow = head, *temp;

    while (n--)
        delay = delay->next;

    if (delay == NULL)
        return head->next;
    
    while (delay != NULL && delay->next != NULL) {
        delay = delay->next;
        slow = slow->next;
    }

    temp = slow->next;
    slow->next = slow->next->next;
    free(temp);

    return head;
}
