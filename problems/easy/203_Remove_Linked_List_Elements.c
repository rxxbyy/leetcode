/*
    Date: Jun 28, 2023
    Problem link: https://leetcode.com/problems/remove-linked-list-elements/
*/
#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

typedef struct ListNode ListNode;

ListNode* removeElements(ListNode* head, int val)
{
    ListNode* aux = head;
    ListNode* temp;

    while (aux && aux->next) {
        if (aux->next->val == val) {
            temp = aux->next;
            aux->next = aux->next->next;
            free(temp);
        } else aux = aux->next;
    }

    while (head && head->val == val) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return head;
}