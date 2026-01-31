#include <iostream>
using namespace std;

// Linear Search
bool linearSearch(int arr[], int size, int key){
    if(size == 0) return false;
    if(arr[0] == key) return true;
    else{
        return linearSearch(arr+1, size-1, key);
    }
}

// Binary Search
bool binarySearch(int arr[], int key, int left, int right){
    if(left > right) return false;
    int mid = (left + right) / 2;
    if(arr[mid] == key) return true;
    else if(key < arr[mid]){
            return binarySearch(arr, key, left, mid - 1);
        }
        else{
            return binarySearch(arr, key, mid + 1, right);
        }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int key = 4;
    cout << binarySearch(arr, key, 0, 5);
}