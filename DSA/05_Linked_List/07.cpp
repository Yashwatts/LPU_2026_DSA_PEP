// Print how many nodes have even values?
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

int calculateEvenValues(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        if(temp->data % 2 == 0) count++;
        temp = temp->next;
    }
    return count;
}

int main(){


}