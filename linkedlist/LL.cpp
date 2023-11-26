#include <bits/stdc++.h>
using namespace std;

class Node {
   public:
    int data;
    Node* next;

   public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

   public:
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};
int getLength(Node* head) {
    Node* temp = head;
    int len = 0;
    while (temp != nullptr) {
        len++;
        temp = temp->next;
    }
    return len;
}

int checkifPresent(Node* head, int val) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == val) return 1;  // Return 1 if the element is found
        temp = temp->next;
    }
    return 0;  // Return 0 if the element is not found in the linked list
}
Node* convertarr2LL(vector<int>& arr) {
    Node* head = new Node(arr[0]);  // creating head
    Node* mover = head;             // pointer pointing towards head
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);  // creating new node every time
        mover->next = temp;             // pointing mover to temp
        mover = mover->next;            // moving mover to the next node
    }
    return head;
}
int main() {
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertarr2LL(arr);
    cout << getLength(head) << endl;
    cout << checkifPresent(head, 5) << endl;
}