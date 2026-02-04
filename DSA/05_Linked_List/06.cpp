// Deletion in Circular Singly Linked List

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

void deleteAtEnd(Node* &head){
    if(head == NULL){
        return;
    }

    if(head->next == head){
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    while(temp->next->next != head){
        temp = temp->next;
    }
    Node* toDel = temp->next;
    temp->next = head;
    delete toDel;
    
}

void deleteAtBeg(Node* &head){
    if(head == NULL) return;
    if(head->next == head){
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    Node* toDel = head;

    while(temp->next != head){
        temp = temp->next;
    }

    temp->next = head->next;
    head = head->next;
    delete toDel;
}

int main(){

}