// Author: Jesus Carlos Martinez Gonzalez
// Date: 18/06/2020
// Solution to: https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem
// Language: C++
// Problem to solve: You’re given the pointer to the head node of a linked list and a specific position... 
// ... Counting backwards from the tail node of the linked list, get the value of the node at the given position... 
// ... A position of 0 corresponds to the tail, 1 corresponds to the node before the tail and so on.

// // Logic: Creates two SinglyLinkedListNode pointers curr & aux, as long as curr is not null point to it's next node, add 1 to index and check whether index is now...
// ... greater than positionFromTail, if it is, point aux to it's next node, else do nothing, once curr is null, return aux's data
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    int index = 0;
    SinglyLinkedListNode* curr = head;
    SinglyLinkedListNode* aux = head;
    while (curr){
        curr = curr->next;
        if (index++ > positionFromTail) aux = aux->next;
    }
    return aux->data;
}