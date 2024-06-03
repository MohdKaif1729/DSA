#include <iostream>
using namespace std;

class Node {

public:
    int data;
    Node* next;

    // Node(int d) {
    //     data = d;
    //     next = NULL;
    // }

    Node() {cout << "Mohd Kaif";}
    
};

int main() {

    // Node* head = new Node(3);
    // cout << head->data << endl;
    // cout << head->next << endl;

    Node* ptr = new Node();
    
    return 0;
}