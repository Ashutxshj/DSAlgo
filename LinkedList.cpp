#include <iostream>
using namespace std;
/*
       Linked List:

       +---------+---------+---------+
       |   10    |   20    |   30    |
       +---------+---------+---------+
       |  NULL   |   NULL  |   NULL  |
       +---------+---------+---------+
         |         |         |
         v         v         v
        +---------+---------+---------+
        |  Head   |  Node1  |  Node2  |
        +---------+---------+---------+

       - Each node contains data and a pointer to the next node.
       - The `head` points to the first node of the list.
       - Each node points to the next node, or `NULL` if it’s the last node.

    */
// Node structure for the linked list
struct Node
{
    int data;
    Node *next;
    Node(int value) : data(value), next(nullptr) {} // Constructor to initialize node
};

// Function to print the linked list
void printList(Node *head)
{
    Node *current = head;
    while (current != nullptr)
    {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

//?          Add in between two nodes
//*           temp2->next=temp->next;
//*           temp->next=temp2;
//*           temp=temp2->next;

// Function to insert at the beginning
void insertAtHead(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

// Function to insert at the end
void insertAtTail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to delete a node with a specific value
void deleteNode(Node *&head, int value)
{
    Node *current = head;
    Node *previous = nullptr;

    // If head node itself holds the value
    if (current != nullptr && current->data == value)
    {
        head = current->next; // Change head
        delete current;       // Free old head
        return;
    }

    // Search for the node to delete
    while (current != nullptr && current->data != value)
    {
        previous = current;
        current = current->next;
    }

    // If the value was not found
    if (current == nullptr)
        return;

    // Unlink the node from the linked list
    previous->next = current->next;
    delete current; // Free memory
}

// Function to search for a value in the list
bool search(Node *head, int value)
{
    Node *current = head;
    while (current != nullptr)
    {
        if (current->data == value)
            return true;
        current = current->next;
    }
    return false;
}

// Main function
int main()
{
    Node *head = nullptr; // Start with an empty list

    // Insert elements
    insertAtHead(head, 10); // 10 -> NULL
    insertAtTail(head, 20); // 10 -> 20 -> NULL
    insertAtTail(head, 30); // 10 -> 20 -> 30 -> NULL
    insertAtHead(head, 5);  // 5 -> 10 -> 20 -> 30 -> NULL

    // Print the linked list
    cout << "Linked List after insertions:" << endl;
    printList(head); // Output: 5 -> 10 -> 20 -> 30 -> NULL

    // Search for a value
    cout << "Searching for 20: " << (search(head, 20) ? "Found" : "Not Found") << endl; // Output: Found

    // Delete a node
    deleteNode(head, 20); // Delete node with value 20
    cout << "Linked List after deleting 20:" << endl;
    printList(head); // Output: 5 -> 10 -> 30 -> NULL

    // Clean up memory
    Node *current = head;
    Node *nextNode;
    while (current != nullptr)
    {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}
