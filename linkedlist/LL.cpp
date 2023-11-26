#include <bits/stdc++.h>
using namespace std;

class Node {
   public:
    int data;
    Node* next;

   public:
    Node(int data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
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
        if (temp->data == val) return 1;
        temp = temp->next;
    }
    return 0;
}
Node* convertarr2LL(vector<int>& arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}
int main() {
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertarr2LL(arr);
    cout << getLength(head) << endl;
    cout << checkifPresent(head, 5) << endl;
}