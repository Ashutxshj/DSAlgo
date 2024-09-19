#include <iostream>
#include <queue>  // Include queue library
using namespace std;

int main() {
    queue<int> q;  // Declare a queue of integers

    // Enqueue (push) elements into the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Display the front and back elements
    cout << "Front element is: " << q.front() << endl;
    cout << "Back element is: " << q.back() << endl;

    // Dequeue (pop) the front element
    q.pop();
    cout << "Front element after pop is: " << q.front() << endl;

    // Check if the queue is empty
    if (q.empty()) {
        cout << "Queue is empty\n";
    } else {
        cout << "Queue is not empty\n";
    }

    // Get the size of the queue
    cout << "Queue size is: " << q.size() << endl;

    return 0;
}
