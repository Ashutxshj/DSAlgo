#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
// To detect cycle in a linked list
bool hasCycle(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return false; // No cycle if list is empty or has only one element
    }
    
    ListNode* slow = head;
    ListNode* fast = head;

    // Traverse the linked list with slow and fast pointers
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;         // Slow pointer moves one step
        fast = fast->next->next;   // Fast pointer moves two steps
        
        if (slow == fast) {
            return true; // Cycle detected
        }
    }
    return false; // No cycle
}
// Function to find the middle of the linked list
ListNode* findMiddle(ListNode* head) {
    if (head == nullptr) {
        return nullptr; // Return nullptr if the list is empty
    }

    ListNode* slow = head;
    ListNode* fast = head;

    // Traverse the list with slow and fast pointers
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;         // Slow pointer moves one step
        fast = fast->next->next;   // Fast pointer moves two steps
    }

    // When fast reaches the end, slow will be at the middle
    return slow;
}

// Main function to test finding the middle of the list
int main() {
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Find and print the middle of the list
    ListNode* middle = findMiddle(head);
    if (middle != nullptr) {
        cout << "The middle node value is: " << middle->val << endl;
    } else {
        cout << "The linked list is empty." << endl;
    }

    return 0;
}
