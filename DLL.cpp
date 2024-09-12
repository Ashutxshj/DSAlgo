#include <iostream>
using namespace std;

// Node structure for a doubly linked list
struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int value) : data(value), next(nullptr), prev(nullptr) {}  // Constructor to initialize node
};

// Function to print the doubly linked list (forward direction)
void printListForward(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " <-> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

// Function to print the doubly linked list (backward direction)
void printListBackward(Node* tail) {
    Node* current = tail;
    while (current != nullptr) {
        cout << current->data << " <-> ";
        current = current->prev;
    }
    cout << "NULL" << endl;
}

// Function to insert at the beginning
void insertAtHead(Node*& head, Node*& tail, int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

// Function to insert at the end
void insertAtTail(Node*& head, Node*& tail, int value) {
    Node* newNode = new Node(value);
    if (tail == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

// Function to delete a node with a specific value
void deleteNode(Node*& head, Node*& tail, int value) {
    Node* current = head;

    // Search for the node to delete
    while (current != nullptr && current->data != value) {
        current = current->next;
    }

    if (current == nullptr) return; // Node with value not found

    // If node to be deleted is head
    if (current == head) {
        head = current->next;
        if (head != nullptr) head->prev = nullptr;
    } 
    // If node to be deleted is tail
    else if (current == tail) {
        tail = current->prev;
        if (tail != nullptr) tail->next = nullptr;
    } 
    // Node is in the middle
    else {
        current->prev->next = current->next;
        current->next->prev = current->prev;
    }

    delete current; // Free memory
}

// Function to search for a value in the list
bool search(Node* head, int value) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == value) return true;
        current = current->next;
    }
    return false;
}

// Main function
int main() {
    Node* head = nullptr;  // Start with an empty list
    Node* tail = nullptr;

    // Insert elements
    insertAtHead(head, tail, 10);  // 10 <-> NULL
    insertAtTail(head, tail, 20);  // 10 <-> 20 <-> NULL
    insertAtTail(head, tail, 30);  // 10 <-> 20 <-> 30 <-> NULL
    insertAtHead(head, tail, 5);   // 5 <-> 10 <-> 20 <-> 30 <-> NULL

    // Print the doubly linked list
    cout << "Doubly Linked List (Forward):" << endl;
    printListForward(head);  // Output: 5 <-> 10 <-> 20 <-> 30 <-> NULL

    cout << "Doubly Linked List (Backward):" << endl;
    printListBackward(tail);  // Output: 30 <-> 20 <-> 10 <-> 5 <-> NULL

    // Search for a value
    cout << "Searching for 20: " << (search(head, 20) ? "Found" : "Not Found") << endl;  // Output: Found

    // Delete a node
    deleteNode(head, tail, 20);  // Delete node with value 20
    cout << "Doubly Linked List after deleting 20 (Forward):" << endl;
    printListForward(head);  // Output: 5 <-> 10 <-> 30 <-> NULL

    cout << "Doubly Linked List after deleting 20 (Backward):" << endl;
    printListBackward(tail);  // Output: 30 <-> 10 <-> 5 <-> NULL

    // Clean up memory
    Node* current = head;
    Node* nextNode;
    while (current != nullptr) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}
