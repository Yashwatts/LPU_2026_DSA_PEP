#include <iostream>
#include <vector>
using namespace std;

class MaxHeap{
    public:
    vector<int> heap;

    void bubbleUp(int index){
        while(index > 0){
        // Find the parent
            int parent = (index - 1) / 2;

        // If curr node 
            if(heap[index] > heap[parent]){
                swap(heap[index], heap[parent]);
                index = parent;
            }
            else{
                break;
            }
        }
    }

    void insertElementInHeap(int value){
        heap.push_back(value);
        bubbleUp(heap.size() - 1);
    }
    // Time Complexity of Insertion in a Heap - O(log n)

    void bubbleDown(){
        int i = 0;
        int size = heap.size();

        while(i < size){
            int left = (2*i)+1;
            int right = (2*i)+2;
            int largest = i;

            if(left < size && heap[left] > heap[largest]){
                largest = left;
            }
            if(right < size && heap[right] > heap[largest]){
                largest = right;
            }
            if(largest != i){
                swap(heap[i], heap[largest]);
                i = largest;
            }
            else{
                break;
            }
        }
    }

    void deleteElementInHeap(){
        if(heap.empty()){
            cout << "Heap is empty";
            return;
        }

        heap[0] = heap.back();
        heap.pop_back();

        if(!heap.empty()) bubbleDown();
    }
    // Time Complexity of deletion in a Heap - O(log n)
};


int main(){
    
}