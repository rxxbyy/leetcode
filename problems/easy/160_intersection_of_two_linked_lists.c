/*
    Date: Jun 15, 2023
    Problem Link: https://leetcode.com/problems/intersection-of-two-linked-lists/
    Diff: Easy
    ---
    O(m + n) time solution with O(m + n) additional space required.
*/

#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

#define NO_INTERSECTION NULL

int _linked_list_length(struct ListNode *head);

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
{
    int diff = _linked_list_length(headA) - _linked_list_length(headB);
    printf("%d\n", diff);
    if (diff > 0) {
        while ((diff--) > 0)
            headA = headA->next;
    }
    else {
        while ((diff++) < 0)
            headB = headB->next;
    }

    while (headA != NULL && headB != NULL) {
        if (headA == headB)
            return headA;
        headA = headA->next;
        headB = headB->next;
    }

    return NO_INTERSECTION;
}

int _linked_list_length(struct ListNode *head)
{
    int counter = 0;

    struct ListNode *aux = head;
    while (aux != NULL) {
        aux = aux->next;
        counter++;
    }
    
    return counter;
}
