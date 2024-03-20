#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node() {
        data = 0;
        next = NULL;
    }

    Node(int d) {
        data = d;
        next = NULL;
    }
};

void printList(Node *head) {
    while (head != NULL) {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

Node* addAtHead(Node *head, int value) {
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    return head;
}

Node* addAtTail(Node *head, int value) {
    Node *newNode = new Node(value);
    if (head == NULL) {
    
        head = newNode;
    } else {
        Node *temp = head;
        
        while (temp->next != NULL) {
            temp = temp->next;
        }
        
        temp->next = newNode;
    }
    return head;
}

int main() {
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);

    n1->next = n2;
    n2->next = n3;

    Node *head = n1;

    cout << "Original Linked List:" << endl;
    printList(head);

    cout << "After adding 8 at the head:" << endl;
    head = addAtHead(head, 8);
    printList(head);

    cout << "After adding 50 at the head:" << endl;
    head = addAtHead(head, 50);
    printList(head);

    cout << "After adding 26 at the tail:" << endl;
    head = addAtTail(head, 26);
    printList(head);

    return 0;
}

