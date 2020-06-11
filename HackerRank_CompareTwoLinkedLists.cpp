// Author: Jesus Carlos Martinez Gonzalez
// Date: 10/06/2020
// Solution to: https://www.hackerrank.com/challenges/compare-two-linked-lists/problem
// Language: C++
// Problem to solve: You’re given the pointer to the head nodes of two linked lists... 
// ... Compare the data in the nodes of the linked lists to check if they are equal... 
// ... The lists are equal only if they have the same number of nodes and corresponding nodes contain the same data... 
// ... Either head pointer given may be null meaning that the corresponding list is empty.

// Logic: While head1 and head 2 are not null, and their data is the same, substitute the heads for their respective next nodes...
// ... once any of the conditions are not met, return the result of whether or not the heads are the same
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2){
    while(head1 && head2 && head1->data == head2->data) head1 = head1->next, head2 = head2->next;
    return head1 == head2;
}