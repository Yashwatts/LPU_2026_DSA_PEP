#include <iostream>
using namespace std;

// find the key in array using linear search, if key is found and value of key > 5, then return the double of key otherwise return the half value of the key
int linearSearch(int arr[], int key, int size){
    for(int i=0; i<size; i++){
        if(key == arr[i]){
            if(key > 5) return 2*key;
            else return key/2;
        }
    }
    return -1;
}

int binarySearch(int arr[], int key, int size){
    int start = 0;
    int end = size-1;

    while(start <= end){
        int mid = (start + end) / 2;
        if(arr[mid] == key) return mid;

        else if(arr[mid] < key) start = mid + 1;
        else end = mid - 1;
    }
    return -1;
}



int main(){
    int arr[5] = {3,1,6,4,2};
    cout << linearSearch(arr, 6, 5);
}