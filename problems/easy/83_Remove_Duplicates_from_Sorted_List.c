/*
    Date: Jun 20, 2023
    Problem Link: https://leetcode.com/problems/remove-duplicates-from-sorted-list
*/
#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

typedef struct ListNode ListNode;

/* deleteDuplicates: delete all duplicates nodes from a sorted singly
    linked list */
ListNode* deleteDuplicates(ListNode* head)
{
    ListNode *next;
    ListNode *curr = head;

    while (curr != NULL && curr->next != NULL) {
        if (curr->val == curr->next->val) {
            next = curr->next;
            curr->next = curr->next->next;
            free(next);
        } else curr = curr->next;
    }

    return head;
}
