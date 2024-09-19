#include <iostream>
#include <stack>  // Include stack library
using namespace std;

int main() {
    stack<int> s;  // Declare a stack of integers

    // Push elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Display the top element
    cout << "Top element is: " << s.top() << endl;

    // Pop the top element
    s.pop();
    cout << "Top element after pop is: " << s.top() << endl;

    // Check if the stack is empty
    if (s.empty()) {
        cout << "Stack is empty\n";
    } else {
        cout << "Stack is not empty\n";
    }

    // Get the size of the stack
    cout << "Stack size is: " << s.size() << endl;

    return 0;
}
