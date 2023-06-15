/*
    Date: Jun 14, 2023
    Problem Link: https://leetcode.com/problems/merge-two-sorted-lists/submissions/971581508/
    Diff: Easy
    ---
    Iterative solution
*/
#include <stdio.h>

/* Singly-linked list definition */
struct ListNode {
    int val;
    struct ListNode *next;
};

typedef struct ListNode ListNode;

/* mergeTwoLists: return the head of a linked lists that comes from merge the
    given two lists */
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
{
    void add_last(ListNode **head, int val); /* prototype */

    ListNode *merged_list = NULL;

    while (list1 != NULL && list2 != NULL) {
        if (list1->val < list2->val) {
            add_last(&merged_list, list1->val);
            list1 = list1->next;
        } else {
            add_last(&merged_list, list2->val);
            list2 = list2->next;
        }
    }

    while (list1 != NULL) {
        add_last(&merged_list, list1->val);
        list1 = list1->next;
    }

    while (list2 != NULL) {
        add_last(&merged_list, list2->val);
        list2 = list2->next;
    }

    return merged_list;
}

/* add_last: add a new node with value `val` at the end of the
    linked list `head`*/
void add_last(ListNode **head, int val)
{
    ListNode *aux = malloc( sizeof(ListNode) );
    aux->val = val;
    aux->next = NULL;

    if (*head == NULL) {
        *head = aux;
    } else {
        ListNode *last_node = *head;

        while (last_node->next != NULL)
            last_node = last_node->next;
        last_node->next = aux;
    }
}
