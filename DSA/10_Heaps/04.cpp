/*

- Priority Queue is a special type of queue where elements are accessed on basis of priority, not the insertion order
- By default it has highest element priority
- Internally it is implemented using heap (CBT) and max heap by default (largest element will be always on top)

*/

#include <iostream>
#include <queue>
using namespace std;

int main(){
    // Max Heap
    priority_queue<int> pq_max;

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> pq_min;

    pq_max.push(10);
    pq_max.push(5);
    pq_max.push(50);
    pq_max.push(20);

    cout << pq_max.size() << endl;
    
    while(!pq_max.empty()){
        cout << pq_max.top() << " ";
        pq_max.pop();
    }
    cout << endl;

    pq_min.push(52);
    pq_min.push(8);
    pq_min.push(23);
    pq_min.push(9);

    while(!pq_min.empty()){
        cout << pq_min.top() << " ";
        pq_min.pop();
    }

}