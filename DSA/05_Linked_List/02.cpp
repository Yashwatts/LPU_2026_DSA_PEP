// Doubly Linked List

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
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
    node->prev = temp;
}

void insertAtBeg(Node* &head, int val){
    Node* node = new Node(val);

    if(head == NULL){
        head = node;
        return;
    }
    node->next = head;
    head->prev = node;
    head = node;
}

void insertAtPosition(Node* &head, int pos, int val){
    Node* node = new Node(val);

    if(pos == 1){
        node->next = head;
        head->prev = node;
        head = node;
        return;
    }

    Node* temp = head;
    for(int i=1; i < pos-1 && temp!=NULL; i++){
        temp = temp->next;
    }
    if(temp == NULL) return;
    node->next = temp->next;
    node->prev = temp;
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
    Node* head = NULL;
    insertAtEnd(head, 50);
    insertAtBeg(head, 100);
    printList(head);
}