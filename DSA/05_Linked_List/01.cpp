// Singly Linked List is uni-directional

// Doubly Linked List is bi-directional

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtEnd(Node* &head, int val){
    Node* node = new Node(val);

    if(head == NULL){
        head = node;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = node;
}

void insertAtBeg(Node* &head, int val){
    Node* node = new Node(val);
    
    if(head == NULL){
        head = node;
        return;
    }

    node -> next = head;
    head = node;
}

void insertAtPosition(Node* &head, int pos, int val){
    Node* node = new Node(val);

    if(pos == 1){
        node->next = head;
        head = node;
        return;
    }

    Node* temp = head;
    for(int i=1; i<pos-1 && temp != NULL; i++){
        temp = temp->next;
    }
    if(temp == NULL){
        return;
    }
    node->next = temp-> next;
    temp->next = node;
}

void printList(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    // Node* n1 = new Node(1);
    // Node* head = n1;
    // Node* n2 = new Node(2);
    // n1->next = n2; 0

    Node* head = NULL;
    insertAtEnd(head, 1);
    insertAtBeg(head, 4);
    insertAtPosition(head, 7, 9);
    printList(head);

}