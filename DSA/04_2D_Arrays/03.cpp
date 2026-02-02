#include <iostream>
#include <math.h>
using namespace std;


void calculateRowSum(int arr[][3]){
    int sum = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
        cout << sum << " ";
        sum = 0;
    }
}

int maximumRowIndex(int arr[][3]){
    int sum = 0;
    int maxSum = 0;
    int index = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
        if(sum > maxSum){
            maxSum = sum;
            index = i;
        }
        sum = 0;
    }
    return index;
}

void calculateColumnSum(int arr[][3]){
    int sum = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum += arr[j][i];
        }
        cout << sum << " ";
        sum = 0;
    }
}

int maximumColumnIndex(int arr[][3]){
    int sum = 0;
    int maxSum = 0;
    int index = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum += arr[j][i];
        }
        if(sum > maxSum){
            maxSum = sum;
            index = i;
        }
        sum = 0;
    }
    return index;
}

int main(){
    int arr[3][3] = {{6, 2, 5}, {1, 7, 9}, {4, 8, 3}};
    // calculateRowSum(arr);
    // maximumRowIndex(arr);
    // calculateColumnSum(arr);
    cout << maximumColumnIndex(arr);
}