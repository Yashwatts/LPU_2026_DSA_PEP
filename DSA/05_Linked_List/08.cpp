// Return true if key exists in Linked List (Recursively)

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

bool searchKey(Node* head, int key){
    if(head == NULL) return false;

    if(head->data == key) return true;

    return searchKey(head->next, key);

}

int main(){

}