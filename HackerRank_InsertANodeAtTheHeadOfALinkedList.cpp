// Author: Jesus Carlos Martinez Gonzalez
// Date: 18/06/2020
// Solution to: https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list/problem
// Language: C++
// Problem to solve: You’re given the pointer to the head node of a linked list and an integer to add to the list... 
// ... Create a new node with the given integer, insert this node at the head of the linked list and return the new head node... 
// ... The head pointer given may be null meaning that the initial list is empty.

// Logic: Create a new SinglyLinkedListNode "curr" with data as it's data, if the linked list isn't null, point the next pointer from curr towards llist... 
// ... else do nothing, then return curr.
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* curr = new SinglyLinkedListNode(data);
    if (llist){
        curr->next = llist;  
    }
    return curr;
}