#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    // Constructor
    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Insert at Beginning
void insertAtBeginning(Node *&head, int value) {
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

// Insert at End
void insertAtEnd(Node *&head, int value) {
    Node *newNode = new Node(value);

    // If the list is empty
    if (head == NULL) {
        head = newNode;
        return;
    }

    Node *temp = head;

    // Traverse to the last node
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Attach the new node
    temp->next = newNode;
}

// Display the Linked List
void display(Node *head) {
    if (head == NULL) {
        cout << "Linked List is empty" << endl;
        return;
    }

    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main() {
    Node *head = NULL;

    // Insert at beginning
    /*insertAtBeginning(head, 5);
    insertAtBeginning(head, 4);
    insertAtBeginning(head, 3);
    insertAtBeginning(head, 2);*/

    cout << "After inserting at beginning:" << endl;
    display(head);

    // Insert at end
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);

    cout << "After inserting at end:" << endl;
    display(head);

    return 0;
}