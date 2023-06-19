/*
    Date: Jun 18, 2023
    Problem link: https://leetcode.com/problems/reverse-linked-list
    Diff: easy
*/
#include <stdio.h>

typedef struct {
    int val;
    ListNode *next;
} ListNode;

void push_node_at_front(ListNode **head_ptr, ListNode **node);

/* reverseList: return a given linked list in reverse order */
ListNode* reverseList(ListNode* head)
{
    ListNode *reversed_linked_list = NULL;

    while (head != NULL) {
        push_node_at_front(&reversed_linked_list, &head);
        head = head->next;
    }

    return reversed_linked_list;
}

/*
 push_node_at_front: inserts a new node in `head_ptr` from another
                      list node.
*/
void push_node_at_front(ListNode **head_ptr, ListNode **node)
{
    ListNode *aux = (ListNode *) malloc(sizeof(ListNode)); /* ... this causes the solution to use O(n) additional space */
    aux->val = (*node)->val;
    aux->next = NULL;

    if (*head_ptr == NULL) {
        *head_ptr = aux;
    } else {
        aux->next = *head_ptr;
        *head_ptr = aux;
    }
}

/*
Note:   There is a solution using three list node pointers 
        and making all nodes in given list to point backwards. Now I 
        understand that solution, but I do not want to "copy" in this
        repo, I just want to upload my solutions even if they are not
        the best ones because I want to see how I am progressing.
*/
