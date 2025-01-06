#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize data and link to another node
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor to initialize data and set next to nullptr
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to convert a vector to a linked list
Node* convertArr2LL(vector<int>& arr) {
    if (arr.empty()) return nullptr; // Handle empty array

    Node* head = new Node(arr[0]);  // Create the head node
    Node* mover = head;             // Pointer to build the list

    // Loop through the rest of the array to create nodes
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;  // Link the new node to the list
        mover = temp;        // Move to the new node
    }
    return head; // Return the head of the linked list
}

// Function to print the entire linked list
void printLinkedList(Node* head) {
    Node* current = head;  // Start from the head node
    while (current != nullptr) {
        cout << current->data << " "; // Print data of the current node
        current = current->next;      // Move to the next node
    }
    cout << endl; // Add a newline after printing the list
}

int main() {
    vector<int> arr = {2, 5, 7, 8};      // Array to be converted to a linked list
    Node* head = convertArr2LL(arr);    // Convert array to linked list
    printLinkedList(head);              // Print the entire linked list
    return 0;
}
