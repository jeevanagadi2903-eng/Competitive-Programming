// Problem: Length of Linked List
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/1
// Solved on: 2026-10-20T10:21:00.222Z

/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    int getCount(Node* head) {
        int count  = 1;
        Node* temp = head;
        while(temp->next != nullptr){
            count++;
            temp = temp->next;
        }
        return count;
    }
};