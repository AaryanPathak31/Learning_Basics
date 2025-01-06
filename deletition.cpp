#include <bits/stdc++.h>
using namespace std;

// Definition of Node
class Node {
public:
    int data;
    Node* next;

    // Constructor with next node specified
    Node(int data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};


// Function to remove the head of the linked list
Node* removeHead(Node* head){
    if(head==nullptr) return head;

    Node*temp=head;
    head= head->next;
    delete temp;
    return head;
}

// Function to convert array to linked list
Node* convertArr2LL(const vector<int>& arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]); // Create the head node
    Node* current = head;

    for (int i = 1; i < arr.size(); i++) {
        current->next = new Node(arr[i]); // Create new nodes
        current = current->next;
    }
    return head;
}

// Function to print the linked list
void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Main function
int main() {
    vector<int> arr = {2, 5, 7, 8};
    Node* head = convertArr2LL(arr); // Convert array to linked list
    printLinkedList(head);          // Print the linked list

    // Example of removing the head
    head = removeHead(head);
    printLinkedList(head); // Print after removing the head

    // Clean up memory
    while (head != nullptr) {
        head = removeHead(head);
    }

    return 0;
}
