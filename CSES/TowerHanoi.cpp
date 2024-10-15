#include <iostream>
using namespace std;
void towerOfHanoi(int n, int source, int destination, int auxiliary) {
    if (n == 1) {
        cout << source << " " << destination << "\n";
        return;
    }
    // Move top n-1 disks from source to auxiliary
    towerOfHanoi(n - 1, source, auxiliary, destination);
    
    // Move the nth (largest) disk from source to destination
    cout << source << " " << destination << endl;
    
    // Move the n-1 disks from auxiliary to destination
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n;
    cin >> n;

    // Minimum number of moves required is 2^n - 1
    int k = (1 << n) - 1;  // equivalent to 2^n - 1
    cout << k << "\n";

    // Solve the Tower of Hanoi problem by moving disks from stack 1 to stack 3
    towerOfHanoi(n, 1, 3, 2);  // Source: 1, Destination: 3, Auxiliary: 2
    
    return 0;
}
