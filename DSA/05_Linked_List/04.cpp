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

    if(head->next == NULL){
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;

    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

void deleteAtBeg(Node* &head){
    if(head == NULL){
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}


int main(){

}